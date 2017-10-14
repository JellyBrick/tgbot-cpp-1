# tgbot-cpp

[![Build Status](https://img.shields.io/travis/foxcpp/tgbot-cpp.svg?style=flat-square)](https://travis-ci.org/foxcpp/tgbot-cpp) 
[![Issues](https://img.shields.io/github/issues-raw/foxcpp/tgbot-cpp.svg?style=flat-square)](https://github.com/foxcpp/tgbot-cpp)
[![License](https://img.shields.io/github/license/foxcpp/tgbot-cpp.svg?style=flat-square)](https://github.com/foxcpp/tgbot-cpp/blob/master/LICENSE)

C++ library for Telegram bot API.

**NOTE: Library is under massive reconstruction. Expect backwards-incompatible changes!**

## API support

- [x] Bot API 2.3.1
- [x] Bot API 3.0 (everything except payments)
- [ ] Bot API 3.1
- [ ] Bot API 3.2
- [ ] Bot API 3.3
- [ ] Bot API 3.4

## Requirements

* CMake 3.2+
* Boost 1.59+ 
  system compomnent for library; regex, iostreams, unit\_test\_framework for tests.
* OpenSSL

Following should be enough on Debian-based distros:
```sh
sudo apt-get install g++ make binutils cmake libssl-dev libboost-system-dev
```


## Compilaton

```sh
git clone https://github.com/foxcpp/tgbot-cpp
cd tgbot-cpp
mkdir build; cd build
cmake ..
make
```


## Bot compilation

#### System library
```cmake
find_package(tgbot-cpp REQUIRED)

add_executable(bot-exe-name file.cpp)
target_link_libraries(bot-exe-name tgbot)
```

#### Submodule
```cmake
add_subdirectory(tgbot-cpp/) # Make sure it points to directory where you placed tgbot-cpp

add_executable(bot-exe-name files.cpp)
target_link_libraries(bot-exe-name tgbot)
```


## Examples

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

For more advanced examples see [examples/](examples)

## Contributing

PRs, issues, questions are welcome!

## Licence

[The MIT License](http://opensource.org/licenses/MIT).
