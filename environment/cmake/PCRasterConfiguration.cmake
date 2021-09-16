# Options for selecting the modules to build.
# PCRASTER_BUILD_<module>

# Options for selecting features.
# PCRASTER_WITH_<feature>

# option(PCRASTER_BUILD_ALL
#     "Build everything, except for documentation and tests" FALSE)
# option(PCRASTER_WITH_ALL "Support all features" FALSE)

option(
    PCRASTER_BUILD_MULTICORE
    "Build Python multicore module"
    ON)
option(
    PCRASTER_BUILD_AGUILA
    "Build Aguila"
    ON)
option(
    PCRASTER_BUILD_MODFLOW
    "Build Modflow module"
    ON)
option(
    PCRASTER_BUILD_OLDCALC
    "Build oldcalc"
    ON)
option(
    PCRASTER_BUILD_TEST
    "Build tests"
    OFF)
option(
    PCRASTER_BUILD_DOCUMENTATION
    "Build documentation"
    OFF)
option(
    PCRASTER_BUILD_BLOCKPYTHON
    "Build blockpython module"
    OFF)
option(
    PCRASTER_BUILD_MOC
    "Build moc"
    OFF)
option(
    PCRASTER_BUILD_MLDD
    "Build mldd"
    OFF)
CMAKE_DEPENDENT_OPTION(
    PCRASTER_WITH_OPENGL
    "Use OpenGL for 3D visualisation"
    ON
    "PCRASTER_BUILD_AGUILA"
    OFF)
option(
    PCRASTER_WITH_FLAGS_NATIVE
    "Use architecture flags of host"
    ON)
option(
    PCRASTER_WITH_FLAGS_IPO
    "Use interprocedural optimization"
    OFF)

option(
    PCRASTER_INSTALL_FILES_DEVELOPER
    "Install development files and documentation"
    OFF)
option(
    PCRASTER_INSTALL_FILES_GDAL
    "Install gdal share folder"
    OFF)

# Refactor these at some point? re-check bundle...
option(
    PCRASTER_PACKAGE_QT
    "Package shared libraries"
    OFF)
option(
    PCRASTER_PACKAGE_QT_PLATFORMS
    "Package Qt Platform Abstraction directory"
    OFF)
option(
    PCRASTER_PACKAGE_XERCES
    "Package shared libraries"
    OFF)
option(
    PCRASTER_PACKAGE_GDAL
    "Package shared libraries"
    OFF)
option(
    PCRASTER_PACKAGE_NCURSES
    "Package shared libraries"
    OFF)


if(NOT PCRASTER_PYTHON_INSTALL_DIR)
    set(PCRASTER_PYTHON_INSTALL_DIR python)
endif()

if(NOT PCRASTER_BIN_INSTALL_DIR)
  set(PCRASTER_BIN_INSTALL_DIR bin)
endif()

if(NOT PCRASTER_LIB_INSTALL_DIR)
  set(PCRASTER_LIB_INSTALL_DIR lib)
endif()


set(Boost_NO_BOOST_CMAKE ON)
# No more linking to Boost required for released components
list(APPEND PCR_BOOST_COMPONENTS )

if(PCRASTER_BUILD_TEST)
    enable_testing()
    list(APPEND PCR_BOOST_COMPONENTS unit_test_framework)
endif()

# >=1.73 required for header-only date_time
find_package(Boost 1.73 REQUIRED COMPONENTS ${PCR_BOOST_COMPONENTS})


# keep this after Boost
if(PCRASTER_BUILD_MULTICORE)
    CPMAddPackage(
        GITHUB_REPOSITORY geoneric/fern
        GIT_TAG 98c68fa27f795cb381c67505f14b64684b155d34
        OPTIONS "FERN_BUILD_ALGORITHM ON" "DEVBASE_BUILD_TEST ${PCRASTER_BUILD_TEST}"
    )
endif()


list(APPEND PCR_QT_COMPONENTS Core Sql Xml)

if(PCRASTER_BUILD_AGUILA)
    list(APPEND PCR_QT_COMPONENTS Gui Widgets Charts)
endif()

if(PCRASTER_WITH_OPENGL)
    find_package(OpenGL REQUIRED)
    list(APPEND PCR_QT_COMPONENTS OpenGL)
endif()

find_package(Qt5 REQUIRED COMPONENTS ${PCR_QT_COMPONENTS})


find_package(XercesC REQUIRED)


find_package(GDAL 2.4 REQUIRED)
message(STATUS "Found GDAL: ")
message(STATUS "  includes:  " ${GDAL_INCLUDE_DIRS})
message(STATUS "  libraries: " ${GDAL_LIBRARIES})
message(STATUS "  version:   " ${GDAL_VERSION})
find_program(GDAL_TRANSLATE gdal_translate
    HINTS ${GDAL_INCLUDE_DIRS}/../bin
)
if(EXISTS "${GDAL_INCLUDE_DIRS}/../../share/gdal")
    set(GDAL_DATA "${GDAL_INCLUDE_DIRS}/../../share/gdal")
elseif(EXISTS "${GDAL_INCLUDE_DIRS}/../share/gdal")
    set(GDAL_DATA "${GDAL_INCLUDE_DIRS}/../share/gdal")
else()
    message(FATAL_ERROR "GDAL data dir not found")
endif()

if(PCRASTER_BUILD_TEST)
    if(NOT GDAL_TRANSLATE)
        message(FATAL_ERROR "gdal_translate executable not found")
    endif()
endif()


find_package(Python3 COMPONENTS Interpreter Development NumPy)
message(STATUS "  Interpreter ID: " ${Python3_INTERPRETER_ID})

if(UNIX)
    set(CURSES_NEED_NCURSES TRUE)
    set(CURSES_NEED_WIDE TRUE)
    find_package(Curses REQUIRED)
    message(STATUS "Found ncurses: ")
    message(STATUS "  includes : " ${CURSES_INCLUDE_DIRS})
    message(STATUS "  libraries: " ${CURSES_LIBRARIES})
endif()

if(PCRASTER_BUILD_TEST)

    find_python_module(psutil)

    # sqlite executable is used by dal's testrun.prolog
    find_package(SQLite3)

    find_program(SQLITE3_EXECUTABLE
        sqlite3
        # HINTS ${SQLITE3_INCLUDE_DIRS}/../bin
        HINTS $<$<BOOL:${SQLITE_FOUND}>:${SQLITE3_INCLUDE_DIRS}/../bin>
    )

    if(NOT SQLITE3_EXECUTABLE)
        message(FATAL_ERROR "sqlite3 executable not found")
    endif()
endif()

if(PCRASTER_BUILD_DOCUMENTATION)
    find_package(Doxygen REQUIRED)
    include(SphinxDoc)
    set(SPHINX_HTML_THEME "pyramid")
endif()



# pybind11
# C++ version flags should match ours
if(NOT CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    set(PYBIND11_CPP_STANDARD -std=c++17)
else()
    set(PYBIND11_CPP_STANDARD /std:c++17)
endif()

# This variable may be set from somewhere (on Windows) leading to
# Python version mixups. Enforce the desired one:
set(PYTHON_EXECUTABLE ${Python3_EXECUTABLE})

# Python.h needs to be known to pass the test
set (CMAKE_REQUIRED_INCLUDES "${Python3_INCLUDE_DIRS};${CMAKE_REQUIRED_INCLUDES}")

check_include_file_cxx("pybind11/pybind11.h" PYBIND11_SYSTEM_INCLUDE)

if(NOT PYBIND11_SYSTEM_INCLUDE)
    FetchContent_Declare(
        pybind11
        GIT_REPOSITORY https://github.com/pybind/pybind11
        GIT_TAG        v2.6.2
    )

    FetchContent_GetProperties(pybind11)
    if(NOT pybind11_POPULATED)
        FetchContent_Populate(pybind11)
        add_subdirectory(${pybind11_SOURCE_DIR} ${pybind11_BINARY_DIR})
    endif()
else()
    find_package(pybind11 REQUIRED)
endif()


# >>> The ones below are required in case a developer needs to
#     regenerate one of the pcraster_model_engine's XML files
# set(DEVBASE_LIB_XSLT_XSLTPROC_REQUIRED TRUE)
# set(DEVBASE_LIB_XML2_REQUIRED TRUE)
# set(DEVBASE_LIB_XSLT_REQUIRED TRUE)
#
# ... or XSD
# set(DEVBASE_XSD_REQUIRED TRUE)
# <<<

