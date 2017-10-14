project(echobot)

add_executable(echobot main.cpp)
target_link_libraries(echobot tgbot)

set_property(TARGET echobot PROPERTY CXX_STANDARD 11)
set_property(TARGET echobot PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET echobot PROPERTY CXX_STANDARD_EXTENSIONS OFF)
