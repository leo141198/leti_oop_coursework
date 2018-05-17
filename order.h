#ifndef ORDER_H
#define ORDER_H

#include <QString>
#include <vector>
#include "pizza.h"
using namespace std;

class Order {
public:
    Order(QString client, QString address, vector<Pizza*> items)
        : client(client),
          address(address),
          items(items),
          complexity(items.size()) {
        static int id = 0;
        this->id = id++;
    }

    int getComplexity() const;
    vector<Pizza*>& pizzas();

    friend class OrderBuilder;

private:
    const QString client;   //имя клиента
    const QString address;  //адрес доставки
    const int complexity;  //сложность приготовления (количество блюд)
    int id;                //уникальный номер заказа
    vector<Pizza*> items;  //блюда
};

#endif  // ORDER_H
