#include "chessmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChessMainWindow w;
    w.show();
    return a.exec();
}
