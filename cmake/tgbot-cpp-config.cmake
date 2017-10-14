## Install configuration for tgbot-cpp
#
# Defines following variables:
# TGBOT_FOUND        - whether tgbot-cpp found
# TGBOT_INCLUDE_DIRS - the tgbot-cpp include directories
# TGBOT_LIBRARIES    - link to these libraries to use tgbot-cpp
#
# Also "tgbot" imported target created.

get_filename_component(SELF_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
include(${SELF_DIR}/tgbot-cpp-targets.cmake)

set(TGBOT_FOUND ON)

cmake_policy(PUSH)
cmake_policy(SET CMP0003 NEW)

if (EXISTS "${SELF_DIR}/../../libtgbot.a")
    get_filename_component(TGBOT_LIBRARIES "${SELF_DIR}/../../libtgbot.a" ABSOLUTE)
    message(STATUS "Found tgbot-cpp: ${TGBOT_LIBRARIES}")
elseif (EXISTS "${SELF_DIR}/../../libtgbot.so")
    get_filename_component(TGBOT_LIBRARIES "${SELF_DIR}/../../libtgbot.so" ABSOLUTE)
    message(STATUS "Found tgbot-cpp: ${TGBOT_LIBRARIES}")
else ()
    message(STATUS "tgbot-cpp library is missing!")
    set(TGBOT_FOUND OFF)
endif ()

get_property(TGBOT_INCLUDE_DIRS
             TARGET tgbot
             PROPERTY INTERFACE_INCLUDE_DIRECTORIES)

cmake_policy(POP)
