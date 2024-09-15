#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <cmath>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(850, 850);
    w.setWindowTitle("Аппроксимация методом наименьших квадратов");
    w.show();
    return a.exec();
}
