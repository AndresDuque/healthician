//
// Created by andres on 23/03/2021.
//

#ifndef HEALTHICIAN_SAVEWINDOW_H
#define HEALTHICIAN_SAVEWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class savewindow; }
QT_END_NAMESPACE

class savewindow : public QWidget {
Q_OBJECT

public:
    explicit savewindow(QWidget *parent = nullptr);

    ~savewindow() override;

private:
    Ui::savewindow *ui;
};

#endif //HEALTHICIAN_SAVEWINDOW_H
