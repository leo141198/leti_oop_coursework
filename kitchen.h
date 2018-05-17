#ifndef KITCHEN_H
#define KITCHEN_H

#include <QWidget>

namespace Ui {
class Kitchen;
}

class Kitchen : public QWidget
{
    Q_OBJECT

public:
    explicit Kitchen(QWidget *parent = 0);
    ~Kitchen();

private:
    Ui::Kitchen *ui;
};

#endif // KITCHEN_H
