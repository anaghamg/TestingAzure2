#include "testwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestWidget w;
    w.show();
	//w.show();
	//sadsdsdad

    return a.exec();
}
