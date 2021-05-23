#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(ItemService &itemService, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , itemService{itemService}
    , itemModel{itemService.getRepository()}
{
    ui->setupUi(this);
    ui->listView_2->setModel(&itemModel);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_deleteBtn_clicked()
{

}

void MainWindow::on_filterBtn_clicked()
{

}
