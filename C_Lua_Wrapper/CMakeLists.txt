cmake_minimum_required (VERSION 3.0)
project (lcounter C)

include_directories (
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
    "/home/hope/.luaver/lua/5.1/include"
)

set (SOURCES
    Counter.c
)

add_library (${PROJECT_NAME} SHARED ${SOURCES} "/home/hope/.luaver/lua/5.1/lib")
target_link_libraries (${PROJECT_NAME} "/home/hope/.luaver/lua/5.1/lib/liblua.a")
set_target_properties (${PROJECT_NAME} PROPERTIES PREFIX "")