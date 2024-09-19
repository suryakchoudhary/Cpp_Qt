#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo()<<this<<"Constructor";
}

// Test::Test()
// {
//     qInfo()<<this<<"Constructor";
// }

Test::~Test()
{
    qInfo()<<"Destructor";
}
