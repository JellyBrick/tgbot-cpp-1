//
// Created by Maks Mazurov (fox.cpp) on 21.05.17.
//

#ifndef TGBOT_SHIPPINGQUERY_H
#define TGBOT_SHIPPINGQUERY_H

#include <string>
#include <memory>
#include <vector>
#include "tgbot/types/User.h"
#include "tgbot/types/ShippingAddress.h"

namespace TgBot {

/**
 * @brief This object contains information about an incoming shipping query.
 *
 * https://core.telegram.org/bots/api#shippingquery
 * 
 * @ingroup types
 */
class ShippingQuery {
public:
    typedef std::shared_ptr<ShippingQuery> ptr;

    /**
     * @brief Unique query identifier.
     */
    std::string id;

    /**
     * @brief User who sent the query.
     */
    User::ptr from;

    /**
     * @brief Bot specified invoice payload.
     */
    std::string invoice_pyaload;

    /**
     * @brief User specified shipping address.
     */
    ShippingAddress::ptr shipping_address;
};
}

#endif //TGBOT_SHIPPINGQUERY_H
