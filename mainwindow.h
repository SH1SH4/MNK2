#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QApplication>
#include <QVector>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
//    void on_acceptNButton_clicked();

    void on_N_textChanged(const QString &arg1);

    void on_acceptNButton_clicked();

    void on_K_textChanged(const QString &arg1);

    void on_spinSize_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    QCustomPlot *wGraphic;
};
#endif // MAINWINDOW_H
