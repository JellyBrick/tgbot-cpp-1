find_package(Boost 1.59.0 COMPONENTS iostreams unit_test_framework REQUIRED)

if (NOT TARGET Boost::iostreams)
    define_boost_target(iostreams)
    define_boost_target(unit_test_framework)
endif ()

set(TGBOT_TEST_SRC
	main.cpp
	tgbot/net/Url.cpp
	tgbot/net/HttpParser.cpp
	tgbot/tools/StringTools.cpp)

add_executable(tgbot_test ${TGBOT_TEST_SRC})

target_link_libraries(tgbot_test tgbot Boost::iostreams Boost::unit_test_framework)
target_include_directories(tgbot_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
set_property(TARGET tgbot_test PROPERTY CXX_STANDARD 11)
set_property(TARGET tgbot_test PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET tgbot_test PROPERTY CXX_STANDARD_EXTENSIONS OFF)

add_test(tgbot_test COMMAND $<TARGET_FILE:tgbot_test>)
