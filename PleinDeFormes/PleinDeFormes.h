#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PleinDeFormes.h"

class PleinDeFormes : public QMainWindow
{
    Q_OBJECT

public:
    PleinDeFormes(QWidget *parent = nullptr);
    ~PleinDeFormes();

private:
    Ui::PleinDeFormesClass ui;
};
