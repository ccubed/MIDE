#include "mide.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MIDE w;
    w.show();

    return a.exec();
}
