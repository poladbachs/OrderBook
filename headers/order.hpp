#ifndef ORDER_HPP
#define ORDER_HPP

#include "enum.hpp"
#include <string>

class Order {
public:
    int id;
    OrderType type;
    OrderSide side;
    double price;
    int quantity;
    bool active;
    std::string symbol; // Asset symbol ("BTC", "ETH", "AAPL", "GOLD")

    // Constructor now takes a symbol.
    Order(int id, OrderType type, OrderSide side, double price, int quantity, const std::string &symbol);
    std::string toString() const;
};

#endif // ORDER_HPP
