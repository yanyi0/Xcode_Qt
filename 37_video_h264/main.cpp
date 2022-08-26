#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QThread>

int main(int argc, char *argv[])
{
    qDebug() << "main" << QThread::currentThread();
    QApplication a(argc, argv);
    qputenv("QT_MAC_WANTS_LAYER", "1");
    MainWindow w;
    w.show();
    return a.exec();
}
