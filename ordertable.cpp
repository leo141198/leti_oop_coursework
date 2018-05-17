#include "ordertable.h"

OrderTable::OrderTable(QWidget* parent) : QTableWidget(parent) {
    this->setColumnCount(2);
    this->setHorizontalHeaderLabels(QStringList() << "Товар"
                                                  << "Кол.");
    this->setColumnWidth(0, 190);
    this->setColumnWidth(1, 63);
    this->showGrid();
    this->setRowCount(0);
    this->setEditTriggers(QAbstractItemView::NoEditTriggers);
    this->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void OrderTable::addItem(QString name) {
    int row_count = this->rowCount();
    for (int i = 0; i < row_count; i++) {
        if (this->item(i, 0)->data(Qt::DisplayRole).toString() == name) {
            this->item(i, 1)->setText(QString::number(
                this->item(i, 1)->data(Qt::DisplayRole).toInt() + 1));
            return;
        }
    }
    this->setRowCount(++row_count);
    this->setItem(row_count - 1, 0, new QTableWidgetItem(name));
    this->setItem(row_count - 1, 1, new QTableWidgetItem("1"));
}
