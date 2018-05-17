#ifndef PIZZA_H
#define PIZZA_H

#include <QString>

class Pizza {
public:
    Pizza(QString name) : name(name) {}

private:
    QString name;
};

#endif  // PIZZA_H
