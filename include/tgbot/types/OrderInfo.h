//
// Created by Maks Mazurov (fox.cpp) on 21.05.17.
//

#ifndef TGBOT_ORDERINFO_H
#define TGBOT_ORDERINFO_H

#include <string>
#include <memory>
#include "tgbot/types/ShippingAddress.h"

namespace TgBot {

/**
 * @brief This object represents information about an order.
 * 
 * https://core.telegram.org/bots/api#orderinfo
 * 
 * @ingroup types
 */
class OrderInfo {
public:
    typedef std::shared_ptr<OrderInfo> ptr;

    /**
     * @brief Optional. User name.
     */
    std::string name;

    /**
     * @brief Optional. User's phone number.
     */
    std::string phone_number;

    /**
     * @brief Optional. User email.
     */
    std::string email;

    /**
     * @brief Optional. User shipping address.
     */
    ShippingAddress::ptr shipping_address;
};
}

#endif //TGBOT_ORDERINFO_H
