#include "mainwindow.h"
#include <QApplication>
#include "jogo_truco.h"
#include "regratruco.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();


    return a.exec();
}
