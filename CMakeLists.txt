cmake_minimum_required(VERSION 3.16)
project(Runner LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_executable(Runner src/main.cpp
        src/Obstacle.cpp
        src/Obstacle.h)
target_link_libraries(Runner PRIVATE sfml-graphics)
target_compile_features(Runner PRIVATE cxx_std_17)

if(WIN32)
    add_custom_command(
        TARGET Runner
        COMMENT "Copy OpenAL DLL"
        PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:Runner>
        VERBATIM)
endif()

install(TARGETS Runner)
