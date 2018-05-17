#include <QApplication>
#include "kitchen.h"
#include "orderwindow.h"

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    OrderWindow w;
    w.show();

    Kitchen kitchen_1;
    kitchen_1.show();

    Kitchen kitchen_2;
    kitchen_2.show();

    return a.exec();
}
