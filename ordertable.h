#ifndef ORDERTABLE_H
#define ORDERTABLE_H

#include <QHeaderView>
#include <QTableWidget>

class OrderTable : public QTableWidget {
public:
    OrderTable(QWidget* parent);
    void addItem(QString name);
    void removeItem();
};

#endif  // ORDERTABLE_H
