#include "widget.h"
#include <QMessageBox>

Widget::Widget(QWidget* parent) :QWidget(parent) {
    this->setFixedWidth(200);
    startbtn = new QPushButton("Start");
    stopbtn = new QPushButton("Stop");
    pausebtn = new QPushButton("Pause");
}
Widget::~Widget() {}

void Widget::starting() {}
void Widget::stoping() {}
void Widget::pausing() {}
