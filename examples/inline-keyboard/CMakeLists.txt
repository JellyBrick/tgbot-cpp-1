project(inline-keyboard)

add_executable(inline-keyboard main.cpp)
target_link_libraries(inline-keyboard tgbot)

set_property(TARGET inline-keyboard PROPERTY CXX_STANDARD 11)
set_property(TARGET inline-keyboard PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET inline-keyboard PROPERTY CXX_STANDARD_EXTENSIONS OFF)
