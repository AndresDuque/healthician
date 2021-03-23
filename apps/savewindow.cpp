//
// Created by andres on 23/03/2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_savewindow.h" resolved

#include "savewindow.h"
#include "ui_savewindow.h"

savewindow::savewindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::savewindow) {
    ui->setupUi(this);
}

savewindow::~savewindow() {
    delete ui;
}
