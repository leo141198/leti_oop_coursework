#ifndef KITCHEN_H
#define KITCHEN_H

#include <QWidget>
#include <vector>

class Pizza;

namespace Ui {
class Kitchen;
}

class Kitchen : public QWidget {
    Q_OBJECT

public:
    explicit Kitchen(QWidget* parent = 0);
    void cookPizza(Pizza* pizaa);
    ~Kitchen();

private:
    int current_production;
    int max_production;
    std::vector<Pizza*> preparing_pizzas;

    Kitchen* next;
    Ui::Kitchen* ui;
};

#endif  // KITCHEN_H
