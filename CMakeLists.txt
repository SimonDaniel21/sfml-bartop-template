#toplevel CmakeLists

cmake_minimum_required(VERSION 3.0.0)
project(bartop-template VERSION 0.1.0)

include(CTest)
enable_testing()


find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

file(GLOB bartop_source
    "src/*.cpp"
)

add_executable(bartop-template main.cpp ${bartop_source})
target_link_libraries(bartop-template sfml-graphics sfml-audio)


target_include_directories(bartop-template
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(SFML_DIR "<sfml root prefix>/lib/cmake/SFML")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")
include(CPack)

