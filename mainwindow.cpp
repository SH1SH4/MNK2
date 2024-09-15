#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <cmath>

void clear_matrix(double **matrix) {
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 5; j++)
            matrix[i][j] = 10;
}

//копирование матрицы с подстановкой столбцов
void temp_matrix(double** matrix, double a[10][10], double b[10], int  k, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == k)
                matrix[i][j] = b[i];
            else
                matrix[i][j] = a[i][j];
        }
    }
}

//вывод элементов матрицы
void print(double a[10][10], int n) {
    QString answer = "";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            answer += (QString::number(a[i][j]) + ' ');
        }
        qDebug() << answer << "\n";
        answer = "";
    }
    qDebug() << "\n";
}

// подсчёт коэффов C
double sum_c(double m[10], int k, int n) {
    double s = 0;
    for (int i = 0; i < n; i++)
        s += pow(m[i], k);
    return s;
}

// подсчёт коэфов b
double sum_b(double x[10], double y[10], int k, int n) {
    double s = 0;
    for (int i = 0; i < n; i++)
        s += pow(x[i], k) * y[i];
    return s;
}

//вычисляет определитель
double det(double **a, int n) {
    double tmp, d;
    for (int k = 0; k < n - 1; k++) {
        for (int i = k + 1; i < n; i++) {
            if (a[k][k] == 0)
                break;
            tmp = a[i][k] / a[k][k];
            for (int j = 0; j < n; j++) {
                a[i][j] -= a[k][j] * tmp;
            }

        }
    }
    d = 1;
    for (int i = 0; i < n; i++) {
        d *= a[i][i];
    }
    return d;
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_N_textChanged(const QString &arg1) //сюда лучше не смотреть
{
    int N = arg1.toInt();
    int K = ui->K->text().toInt();
    //Включение окон для ввода координат в зависимости от N
    if (N >= 2) {
        ui->lineEditY->setEnabled(1);
        ui->lineEditX->setEnabled(1);
        ui->lineEditY_2->setEnabled(1);
        ui->lineEditX_2->setEnabled(1);
    }
    if (N >= 3) {
        ui->lineEditY_3->setEnabled(1);
        ui->lineEditX_3->setEnabled(1);
    }
    if (N >= 4) {
        ui->lineEditY_4->setEnabled(1);
        ui->lineEditX_4->setEnabled(1);
    }
    if (N >= 5) {
        ui->lineEditY_5->setEnabled(1);
        ui->lineEditX_5->setEnabled(1);
    }
    if (N >= 6) {
        ui->lineEditY_6->setEnabled(1);
        ui->lineEditX_6->setEnabled(1);
    }
    if (N >= 7) {
        ui->lineEditY_7->setEnabled(1);
        ui->lineEditX_7->setEnabled(1);
    }
    if (N >= 8) {
        ui->lineEditY_8->setEnabled(1);
        ui->lineEditX_8->setEnabled(1);
    }
    if (N >= 9) {
        ui->lineEditY_9->setEnabled(1);
        ui->lineEditX_9->setEnabled(1);
    }
    //Выключение окон для ввода координат в зависимости от N
    if (N < 2) {
        ui->lineEditY->setEnabled(0);
        ui->lineEditX->setEnabled(0);
        ui->lineEditY_2->setEnabled(0);
        ui->lineEditX_2->setEnabled(0);
    }
    if (N < 3) {
        ui->lineEditY_3->setEnabled(0);
        ui->lineEditX_3->setEnabled(0);
    }
    if (N < 4) {
        ui->lineEditY_4->setEnabled(0);
        ui->lineEditX_4->setEnabled(0);
    }
    if (N < 5) {
        ui->lineEditY_5->setEnabled(0);
        ui->lineEditX_5->setEnabled(0);
    }
    if (N < 6) {
        ui->lineEditY_6->setEnabled(0);
        ui->lineEditX_6->setEnabled(0);
        }
    if (N < 7) {
        ui->lineEditY_7->setEnabled(0);
        ui->lineEditX_7->setEnabled(0);
        }
    if (N < 8) {
        ui->lineEditY_8->setEnabled(0);
        ui->lineEditX_8->setEnabled(0);
        }
    if (N < 9) {
        ui->lineEditY_9->setEnabled(0);
        ui->lineEditX_9->setEnabled(0);
        }

    if (2 > N || 9 < N) {
        ui->warningLabel->setVisible(1);
        ui->acceptNButton->setDisabled(1);
        ui->lineEditY->setEnabled(0);
        ui->lineEditX->setEnabled(0);
        ui->lineEditY_2->setEnabled(0);
        ui->lineEditX_2->setEnabled(0);
        ui->lineEditY_3->setEnabled(0);
        ui->lineEditX_3->setEnabled(0);
        ui->lineEditY_4->setEnabled(0);
        ui->lineEditX_4->setEnabled(0);
        ui->lineEditY_5->setEnabled(0);
        ui->lineEditX_5->setEnabled(0);
        ui->lineEditY_6->setEnabled(0);
        ui->lineEditX_6->setEnabled(0);
        ui->lineEditY_7->setEnabled(0);
        ui->lineEditX_7->setEnabled(0);
        ui->lineEditY_8->setEnabled(0);
        ui->lineEditX_8->setEnabled(0);
        ui->lineEditY_9->setEnabled(0);
        ui->lineEditX_9->setEnabled(0);
    } else {
        ui->warningLabel->setVisible(0);
        ui->acceptNButton->setDisabled(0);
    }
    if (K < 2 || K > N - 1) {
        if (K < 2) {
            ui->warningLabel3->setVisible(1);
            ui->acceptNButton->setDisabled(1);
        }
        if (K > N - 1) {
            ui->warningLabel2->setVisible(1);
            ui->acceptNButton->setDisabled(1);
            qDebug() << K << " " << N;
        }
    } else {
        ui->warningLabel2->setVisible(0);
        ui->warningLabel3->setVisible(0);
        ui->acceptNButton->setDisabled(0);
    }
}

void MainWindow::on_acceptNButton_clicked()
{
//   qDebug() << ui->lineEditY->text().toDouble() << " " << ui->lineEditY->text().toDouble() << " " << ui->lineEditY_3 << " " << ui->lineEditY_4 << " " << ui->lineEditY_5 << " " << "\n";
//   qDebug() << ui->lineEditX->text().toDouble() << " " << ui->lineEditX->text().toDouble() << " " << ui->lineEditX_3 << " " << ui->lineEditX_4 << " " << ui->lineEditX_5 << " " << "\n";
   int n = ui->N->text().toInt();
   int K = ui->K->text().toInt() + 1;
   double c[10][10];
   double x[10], y[10];
   double b[n];
   double d[10] = {0};
   double **matrix = new double *[10];
   double temp;
   double eps = 1e-2;
   bool f = 0;
   QVector<double> X, Y;
   X.clear();
   Y.clear();
   QString answer = "";
   QFont legendFont = font();
   legendFont.setPointSize(11);

   for (int i = 0; i < K; i++)
       matrix[i] = new double[10];

   x[0] = ui->lineEditX->text().toDouble();
   x[1] = ui->lineEditX_2->text().toDouble();
   x[2] = ui->lineEditX_3->text().toDouble();
   x[3] = ui->lineEditX_4->text().toDouble();
   x[4] = ui->lineEditX_5->text().toDouble();
   x[5] = ui->lineEditX_6->text().toDouble();
   x[6] = ui->lineEditX_7->text().toDouble();
   x[7] = ui->lineEditX_8->text().toDouble();
   x[8] = ui->lineEditX_9->text().toDouble();


   y[0] = ui->lineEditY->text().toDouble();
   y[1] = ui->lineEditY_2->text().toDouble();
   y[2] = ui->lineEditY_3->text().toDouble();
   y[3] = ui->lineEditY_4->text().toDouble();
   y[4] = ui->lineEditY_5->text().toDouble();
   y[5] = ui->lineEditY_6->text().toDouble();
   y[6] = ui->lineEditY_7->text().toDouble();
   y[7] = ui->lineEditY_8->text().toDouble();
   y[8] = ui->lineEditY_9->text().toDouble();

//   qDebug() << ui->lineEditX->text().toDouble();
//   qDebug() << ui->lineEditX_2->text().toDouble();
//   qDebug() << ui->lineEditX_3->text().toDouble();

   for (int i = 0; i < K; i++) {
       for (int j = 0; j < K; j++) {
           c[i][j] = sum_c(x, j + i, K);
       }
   }
   for (int i = 0; i < K; i++)
       b[i] = sum_b(x, y, i, K);
   for (int i = 0; i < K + 1; i++) {
       temp_matrix(matrix, c, b, (i - 1), K);
       d[i] = det(matrix, K);
       qDebug() << d[i];
   }
//   for (int i = 0; i < n; i++)
//       qDebug() << QString::number(d[i]);
   for (int i = 1; i < K + 1; i++) {
       temp = d[i] / d[0];
       qDebug() << temp;
       if (eps > abs(temp))
           continue;
       else if (f) {
           if (temp > 0)
               answer += "+ ";
           else
               answer += "- ";
       }
       else
           f = 1;
//       qDebug() << QString::number(abs(temp));
       answer += QString::number(abs(temp)) + "x^" + QString::number(i - 1) + " ";
   }
   for (float i = -200; i < 200; i += 0.5) {
       X.push_back(i);
       Y.push_back(d[1]/d[0] + d[2]/d[0] * i + d[3]/d[0] * pow(i, 2) + d[4]/d[0] * pow(i, 3) + d[5]/d[0] * pow(i, 4) + d[6]/d[0] * pow(i, 5) + d[7]/d[0] * pow(i, 6) + d[8]/d[0] * pow(i, 7));
   }
   ui->labelAnswer->setText(answer);
   ui->widget->addGraph();
   ui->widget->graph(0)->setData(X, Y);
   ui->widget->xAxis->setLabel("x");
   ui->widget->xAxis->setRange(-100, 100);
   ui->widget->yAxis->setRange(-100, 100);
   ui->widget->yAxis->setLabel("y");
   ui->widget->addGraph();
   QVector<double> x1, y1;
   for (int i = 0; i < n; i++) {
       x1.push_back(x[i]);
       y1.push_back(y[i]);
   }
   ui->widget->graph(1)->setData(x1, y1);
   ui->widget->graph(1)->setLineStyle(QCPGraph::lsNone );
   ui->widget->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCross, 8));
   ui->widget->replot();
   ui->spinSize->setDisabled(0);
   ui->spinSize->setValue(100);
}

void MainWindow::on_K_textChanged(const QString &arg1)
{
    int K = arg1.toInt();
    int N = ui->N->text().toInt();
    if (K < 2 || K > N - 1) {
        if (K < 2) {
            ui->warningLabel3->setVisible(1);
            ui->acceptNButton->setDisabled(1);
        }
        if (K > N - 1) {
            ui->warningLabel2->setVisible(1);
            ui->acceptNButton->setDisabled(1);
            qDebug() << K << " " << N;
        }
    } else {
        ui->warningLabel2->setVisible(0);
        ui->warningLabel3->setVisible(0);
        ui->acceptNButton->setDisabled(0);
    }
}

void MainWindow::on_spinSize_valueChanged(int arg1)
{

    ui->widget->xAxis->setRange(-abs(arg1), abs(arg1));
    ui->widget->yAxis->setRange(-abs(arg1), abs(arg1));
    ui->widget->replot();
}
