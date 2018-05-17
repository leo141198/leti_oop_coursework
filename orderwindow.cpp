#include "orderwindow.h"
#include "ui_orderwindow.h"

OrderWindow::OrderWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::OrderWindow) {
    ui->setupUi(this);
    auto sigmapper = new QSignalMapper(this);
    connect(ui->pizza_1, SIGNAL(clicked(bool)), sigmapper, SLOT(map()));
    connect(ui->pizza_2, SIGNAL(clicked(bool)), sigmapper, SLOT(map()));
    connect(ui->pizza_3, SIGNAL(clicked(bool)), sigmapper, SLOT(map()));
    connect(ui->pizza_4, SIGNAL(clicked(bool)), sigmapper, SLOT(map()));
    connect(ui->pizza_set, SIGNAL(clicked(bool)), sigmapper, SLOT(map()));
    sigmapper->setMapping(ui->pizza_1, "Пицца 1");
    sigmapper->setMapping(ui->pizza_2, "Пицца 2");
    sigmapper->setMapping(ui->pizza_3, "Пицца 3");
    sigmapper->setMapping(ui->pizza_4, "Пицца 4");
    sigmapper->setMapping(ui->pizza_set, "Набор");
    connect(sigmapper, SIGNAL(mapped(QString)), this, SLOT(addItem(QString)));
}

OrderWindow::~OrderWindow() {
    delete ui;
}

void OrderWindow::addItem(QString name) {
    ui->order_table->addItem(name);
}
