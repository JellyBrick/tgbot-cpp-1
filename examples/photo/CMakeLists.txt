project(photo)

add_executable(photo main.cpp)
target_link_libraries(photo tgbot)

set_property(TARGET photo PROPERTY CXX_STANDARD 11)
set_property(TARGET photo PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET photo PROPERTY CXX_STANDARD_EXTENSIONS OFF)
