#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include    <QtCharts>  //必须这么设置

//using namespace QtCharts;   //使用QtCharts的namespace
//QT_CHARTS_USE_NAMESPACE     //使用宏定义
QT_BEGIN_NAMESPACE
class QChartView;
class QChart;
QT_END_NAMESPACE

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    void    createChart();//

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H