#ifndef ORDERWINDOW_H
#define ORDERWINDOW_H

#include <QMainWindow>
#include <QSignalMapper>

namespace Ui {
class OrderWindow;
}

class OrderWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit OrderWindow(QWidget* parent = 0);
    ~OrderWindow();

private slots:
    void addItem(QString name);

    void on_pizza_remove_clicked();

private:
    Ui::OrderWindow* ui;
};

#endif  // ORDERWINDOW_H
