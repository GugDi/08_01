#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class Widget : public QWidget {
  Q_OBJECT

public:
    Widget(QWidget* parent = nullptr);
    ~Widget();
};

private:
    QPushButton* startbtn;
    QPushButton* stopbtn;
    QPushButton* pausebtn;
    QVBoxLayout* qvbl;

private slots:
    void starting();
    void stoping();
    void pausing();
  
#endif
