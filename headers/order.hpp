#ifndef ORDER_HPP
#define ORDER_HPP

#include "enum.hpp"
#include <string>

class Order {
public:
    int id;
    OrderType type;
    double price;
    int quantity;
    bool active;

    Order(int id, OrderType type, double price, int quantity);
    std::string toString() const;
};

#endif