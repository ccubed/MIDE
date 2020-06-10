#include "mide.h"
#include "ui_mide.h"

MIDE::MIDE(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MIDE)
{
    ui->setupUi(this);
}

MIDE::~MIDE()
{
    delete ui;
}
