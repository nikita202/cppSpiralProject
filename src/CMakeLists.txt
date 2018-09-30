project(${CMAKE_PROJECT_NAME}_lib)

set(HEADER_FILES
        spiral.h)
set(SOURCE_FILES
        spiral.cpp)

add_library(${CMAKE_PROJECT_NAME}_lib STATIC
        ${SOURCE_FILES}
        ${HEADER_FILES}
        )
