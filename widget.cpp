#include "widget.h"
#include <QMessageBox>

Widget::Widget(QWidget* parent) :QWidget(parent) {
    this->setFixedWidth(200);
    startbtn = new QPushButton("Start");
    stopbtn = new QPushButton("Stop");
    pausebtn = new QPushButton("Pause");

    qvbl = new QVBoxLayout(this);
    qvbl->addWidget(startbtn);
    qvbl->addWidget(stopbtn);
    qvbl->addWidget(pausebtn);

    connect(startbtn, &QPushButton::clicked, this, &Widget::starting);
    connect(stopbtn, &QPushButton::clicked, this, &Widget::stoping);
    connect(pausebtn, &QPushButton::clicked, this, &Widget::pausing);
}
Widget::~Widget() {}

void Widget::starting() {
    QMessageBox::warning(this, "Information", "Test v8.1: OK.");
}
void Widget::stoping() {}
void Widget::pausing() {}
