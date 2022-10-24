#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);//窗体上组件的创建、属性设置、信号与槽的关联
}

MainWindow::~MainWindow()
{
    delete ui;
}
