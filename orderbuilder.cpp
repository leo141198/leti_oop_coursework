#include "orderbuilder.h"

OrderBuilder& OrderBuilder::setClient(QString client) {
    this->client = client;
    return *this;
}

OrderBuilder& OrderBuilder::setAddress(QString address) {
    this->address = address;
    return *this;
}

OrderBuilder& OrderBuilder::addItem(QString item) {
    this->items.push_back(new Pizza(item));
    return *this;
}

Order* OrderBuilder::build() {
    Order* order = new Order(client, address, items);
    foreach (Pizza* item, items) { OrderBuilder::kitchen->cookPizza(item); }
    return order;
}
