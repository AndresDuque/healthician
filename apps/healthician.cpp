//
// Created by andres on 23/03/2021.
//
#include <QApplication>
#include <QPushButton>
#include "include/savewindow.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    savewindow w;
    w.show();
    return a.exec();
}
