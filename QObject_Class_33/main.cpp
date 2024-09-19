#include <QCoreApplication>
#include "test.h"

void call1()
{
    Test t;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    call1();

    return a.exec();
}
