# tgbot-cpp

[![Build Status](https://img.shields.io/travis/foxcpp/tgbot-cpp.svg?style=flat-square)](https://travis-ci.org/foxcpp/tgbot-cpp) 
[![Issues](https://img.shields.io/github/issues-raw/foxcpp/tgbot-cpp.svg?style=flat-square)](https://github.com/foxcpp/tgbot-cpp)
[![License](https://img.shields.io/github/license/foxcpp/tgbot-cpp.svg?style=flat-square)](https://github.com/foxcpp/tgbot-cpp/blob/master/LICENSE)

C++ library for Telegram bot API.

Documentation is located [here](http://foxcpp.github.io/tgbot-cpp).

## Library compilation

Firstly you need to install some dependencies such as Boost and build tools such as CMake. On Debian-based distibutives you can do it with these commands:
```sh
sudo apt-get install g++ make binutils cmake libssl-dev libboost-system-dev
```

To compile the library execute this commands:
```sh
git clone https://github.com/foxcpp/tgbot-cpp
cd tgbot-cpp
mkdir build; cd build
cmake ..
make
```

## Bot compilation

### With CMake
[Example CMakeLists.txt](samples/echobot/CMakeLists.txt)

## Samples

Simple echo bot which sends everything it receives:
```cpp
#include <stdio.h>
#include <tgbot/tgbot.h>

int main() {
    TgBot::Bot bot("PLACE YOUR TOKEN HERE");
    bot.getEvents().onCommand("start", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, "Hi!");
    });
    bot.getEvents().onAnyMessage([&bot](TgBot::Message::Ptr message) {
        printf("User wrote %s\n", message->text.c_str());
        if (StringTools::startsWith(message->text, "/start")) {
            return;
        }
        bot.getApi().sendMessage(message->chat->id, "Your message is: " + message->text);
    });
    try {
        printf("Bot username: %s\n", bot.getApi().getMe()->username.c_str());
        TgBot::TgLongPoll longPoll(bot);
        while (true) {
            printf("Long poll started\n");
            longPoll.start();
        }
    } catch (TgBot::TgException& e) {
        printf("error: %s\n", e.what());
    }
    return 0;
}
```

All samples are located [here](samples).

## Feedback
Feel free to [create new issues on GitHub](https://github.com/foxcpp/tgbot-cpp/issues).

## Licence
[The MIT License](http://opensource.org/licenses/MIT).
