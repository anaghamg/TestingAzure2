#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include <QWidget>
#include <QDebug>


class TestWidget : public QWidget
{
    Q_OBJECT

public:
    TestWidget(QWidget *parent = 0);
    ~TestWidget();
};

#endif // TESTWIDGET_H
