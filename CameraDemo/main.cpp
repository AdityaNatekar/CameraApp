#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    try {
        MainWindow w;
        w.show();
        return a.exec();
    }
    catch (const std::bad_alloc &) {
        return EXIT_FAILURE;
    }
}
