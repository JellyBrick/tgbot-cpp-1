//
// Created by Maks Mazurov (fox.cpp) on 21.05.17.
//

#ifndef TGBOT_SHIPPINGADDRESS_H
#define TGBOT_SHIPPINGADDRESS_H

#include <string>
#include <memory>

namespace TgBot {

/**
 * @brief This object represents a shipping address.
 * 
 * https://core.telegram.org/bots/api#shippingaddress
 * 
 * @ingroup types
 */
class ShippingAddress {
public:
    typedef std::shared_ptr<ShippingAddress> ptr;

    /**
     * @brief ISO 3166-1 alpha-2 country code.
     */
    std::string country_code;

    /**
     * @brief State, if applicable.
     */
    std::string state;

    /**
     * @brief City.
     */
    std::string city;

    /**
     * @brief First line for the address.
     */
    std::string street_line1;

    /**
     * @brief Second line for the address.
     */
    std::string street_line2;

    /**
     * Address post code.
     */
    std::string post_code;
};
}

#endif //TGBOT_SHIPPINGADDRESS_H
