#ifndef ORDERBUILDER_H
#define ORDERBUILDER_H

#include "kitchen.h"
#include "order.h"

class Kitchen;

class OrderBuilder {
public:
    OrderBuilder();
    OrderBuilder& setClient(QString client);
    OrderBuilder& setAddress(QString address);
    OrderBuilder& addItem(QString item);
    Order* build();

    static Kitchen* kitchen;

private:
    QString client;   //имя клиента
    QString address;  //адрес доставки
    int complexity;  //сложность приготовления (количество блюд)
    vector<Pizza*> items;  //блюда
};

Kitchen* OrderBuilder::kitchen = nullptr;
#endif  // ORDERBUILDER_H
