#include "JenkinsTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JenkinsTest w;
    w.show();
    return a.exec();
}
