#include "hubwindow.h"
#include "ui_hubwindow.h"

HubWindow::HubWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HubWindow)
{
    ui->setupUi(this);
}

HubWindow::~HubWindow()
{
    delete ui;
}
