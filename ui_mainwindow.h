/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelN;
    QSpinBox *N;
    QPushButton *acceptNButton;
    QLabel *warningLabel;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditX;
    QLineEdit *lineEditX_2;
    QLineEdit *lineEditX_3;
    QLineEdit *lineEditX_4;
    QLineEdit *lineEditX_5;
    QLineEdit *lineEditX_6;
    QLineEdit *lineEditY;
    QLineEdit *lineEditY_2;
    QLineEdit *lineEditY_3;
    QLineEdit *lineEditY_4;
    QLineEdit *lineEditY_5;
    QLineEdit *lineEditY_6;
    QLabel *label_3;
    QLabel *labelAnswer;
    QLineEdit *lineEditX_7;
    QLineEdit *lineEditX_8;
    QLineEdit *lineEditX_9;
    QLineEdit *lineEditY_7;
    QLineEdit *lineEditY_8;
    QLineEdit *lineEditY_9;
    QLabel *warningLabel2;
    QLabel *label_5;
    QSpinBox *K;
    QLabel *warningLabel3;
    QCustomPlot *widget;
    QSpinBox *spinSize;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(829, 857);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelN = new QLabel(centralwidget);
        labelN->setObjectName(QString::fromUtf8("labelN"));
        labelN->setGeometry(QRect(10, 10, 461, 41));
        QFont font;
        font.setPointSize(20);
        labelN->setFont(font);
        N = new QSpinBox(centralwidget);
        N->setObjectName(QString::fromUtf8("N"));
        N->setGeometry(QRect(490, 10, 61, 51));
        N->setFont(font);
        acceptNButton = new QPushButton(centralwidget);
        acceptNButton->setObjectName(QString::fromUtf8("acceptNButton"));
        acceptNButton->setEnabled(false);
        acceptNButton->setGeometry(QRect(710, 150, 81, 121));
        warningLabel = new QLabel(centralwidget);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setEnabled(true);
        warningLabel->setGeometry(QRect(10, 280, 771, 51));
        QFont font1;
        font1.setPointSize(28);
        warningLabel->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 150, 41, 41));
        QFont font2;
        font2.setPointSize(36);
        label->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 210, 41, 41));
        label_2->setFont(font2);
        lineEditX = new QLineEdit(centralwidget);
        lineEditX->setObjectName(QString::fromUtf8("lineEditX"));
        lineEditX->setEnabled(false);
        lineEditX->setGeometry(QRect(70, 160, 61, 31));
        QFont font3;
        font3.setPointSize(14);
        lineEditX->setFont(font3);
        lineEditX_2 = new QLineEdit(centralwidget);
        lineEditX_2->setObjectName(QString::fromUtf8("lineEditX_2"));
        lineEditX_2->setEnabled(false);
        lineEditX_2->setGeometry(QRect(140, 160, 61, 31));
        lineEditX_2->setFont(font3);
        lineEditX_3 = new QLineEdit(centralwidget);
        lineEditX_3->setObjectName(QString::fromUtf8("lineEditX_3"));
        lineEditX_3->setEnabled(false);
        lineEditX_3->setGeometry(QRect(210, 160, 61, 31));
        lineEditX_3->setFont(font3);
        lineEditX_4 = new QLineEdit(centralwidget);
        lineEditX_4->setObjectName(QString::fromUtf8("lineEditX_4"));
        lineEditX_4->setEnabled(false);
        lineEditX_4->setGeometry(QRect(280, 160, 61, 31));
        lineEditX_4->setFont(font3);
        lineEditX_5 = new QLineEdit(centralwidget);
        lineEditX_5->setObjectName(QString::fromUtf8("lineEditX_5"));
        lineEditX_5->setEnabled(false);
        lineEditX_5->setGeometry(QRect(350, 160, 61, 31));
        lineEditX_5->setFont(font3);
        lineEditX_6 = new QLineEdit(centralwidget);
        lineEditX_6->setObjectName(QString::fromUtf8("lineEditX_6"));
        lineEditX_6->setEnabled(false);
        lineEditX_6->setGeometry(QRect(420, 160, 61, 31));
        lineEditX_6->setFont(font3);
        lineEditY = new QLineEdit(centralwidget);
        lineEditY->setObjectName(QString::fromUtf8("lineEditY"));
        lineEditY->setEnabled(false);
        lineEditY->setGeometry(QRect(70, 220, 61, 31));
        lineEditY->setFont(font3);
        lineEditY_2 = new QLineEdit(centralwidget);
        lineEditY_2->setObjectName(QString::fromUtf8("lineEditY_2"));
        lineEditY_2->setEnabled(false);
        lineEditY_2->setGeometry(QRect(140, 220, 61, 31));
        lineEditY_2->setFont(font3);
        lineEditY_3 = new QLineEdit(centralwidget);
        lineEditY_3->setObjectName(QString::fromUtf8("lineEditY_3"));
        lineEditY_3->setEnabled(false);
        lineEditY_3->setGeometry(QRect(210, 220, 61, 31));
        lineEditY_3->setFont(font3);
        lineEditY_4 = new QLineEdit(centralwidget);
        lineEditY_4->setObjectName(QString::fromUtf8("lineEditY_4"));
        lineEditY_4->setEnabled(false);
        lineEditY_4->setGeometry(QRect(280, 220, 61, 31));
        lineEditY_4->setFont(font3);
        lineEditY_5 = new QLineEdit(centralwidget);
        lineEditY_5->setObjectName(QString::fromUtf8("lineEditY_5"));
        lineEditY_5->setEnabled(false);
        lineEditY_5->setGeometry(QRect(350, 220, 61, 31));
        lineEditY_5->setFont(font3);
        lineEditY_6 = new QLineEdit(centralwidget);
        lineEditY_6->setObjectName(QString::fromUtf8("lineEditY_6"));
        lineEditY_6->setEnabled(false);
        lineEditY_6->setGeometry(QRect(420, 220, 61, 31));
        lineEditY_6->setFont(font3);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 480, 101, 41));
        QFont font4;
        font4.setPointSize(24);
        label_3->setFont(font4);
        labelAnswer = new QLabel(centralwidget);
        labelAnswer->setObjectName(QString::fromUtf8("labelAnswer"));
        labelAnswer->setGeometry(QRect(110, 480, 671, 41));
        labelAnswer->setFont(font4);
        lineEditX_7 = new QLineEdit(centralwidget);
        lineEditX_7->setObjectName(QString::fromUtf8("lineEditX_7"));
        lineEditX_7->setEnabled(false);
        lineEditX_7->setGeometry(QRect(490, 160, 61, 31));
        lineEditX_7->setFont(font3);
        lineEditX_8 = new QLineEdit(centralwidget);
        lineEditX_8->setObjectName(QString::fromUtf8("lineEditX_8"));
        lineEditX_8->setEnabled(false);
        lineEditX_8->setGeometry(QRect(560, 160, 61, 31));
        lineEditX_8->setFont(font3);
        lineEditX_9 = new QLineEdit(centralwidget);
        lineEditX_9->setObjectName(QString::fromUtf8("lineEditX_9"));
        lineEditX_9->setEnabled(false);
        lineEditX_9->setGeometry(QRect(630, 160, 61, 31));
        lineEditX_9->setFont(font3);
        lineEditY_7 = new QLineEdit(centralwidget);
        lineEditY_7->setObjectName(QString::fromUtf8("lineEditY_7"));
        lineEditY_7->setEnabled(false);
        lineEditY_7->setGeometry(QRect(490, 220, 61, 31));
        lineEditY_7->setFont(font3);
        lineEditY_8 = new QLineEdit(centralwidget);
        lineEditY_8->setObjectName(QString::fromUtf8("lineEditY_8"));
        lineEditY_8->setEnabled(false);
        lineEditY_8->setGeometry(QRect(560, 220, 61, 31));
        lineEditY_8->setFont(font3);
        lineEditY_9 = new QLineEdit(centralwidget);
        lineEditY_9->setObjectName(QString::fromUtf8("lineEditY_9"));
        lineEditY_9->setEnabled(false);
        lineEditY_9->setGeometry(QRect(630, 220, 61, 31));
        lineEditY_9->setFont(font3);
        warningLabel2 = new QLabel(centralwidget);
        warningLabel2->setObjectName(QString::fromUtf8("warningLabel2"));
        warningLabel2->setGeometry(QRect(10, 320, 801, 61));
        warningLabel2->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 80, 501, 41));
        label_5->setFont(font);
        K = new QSpinBox(centralwidget);
        K->setObjectName(QString::fromUtf8("K"));
        K->setGeometry(QRect(520, 70, 61, 51));
        K->setFont(font);
        warningLabel3 = new QLabel(centralwidget);
        warningLabel3->setObjectName(QString::fromUtf8("warningLabel3"));
        warningLabel3->setGeometry(QRect(10, 370, 801, 61));
        warningLabel3->setFont(font1);
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 540, 721, 271));
        spinSize = new QSpinBox(centralwidget);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        spinSize->setEnabled(false);
        spinSize->setGeometry(QRect(740, 590, 71, 151));
        QFont font5;
        font5.setPointSize(18);
        spinSize->setFont(font5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 829, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelN->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273-\320\262\320\276 \321\202\320\276\321\207\320\265\320\272 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202 (N):", nullptr));
        acceptNButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        warningLabel->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 2 <= N <= 9", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\262\320\265\321\202:", nullptr));
        labelAnswer->setText(QString());
        warningLabel2->setText(QCoreApplication::translate("MainWindow", "K \320\264\320\276\320\273\320\266\320\275\320\276 \320\261\321\213\321\202\321\214 \320\274\320\265\320\275\321\214\321\210\320\265 N \320\275\320\265 \320\274\320\265\320\275\320\265\320\265 \321\207\320\265\320\274 \320\275\320\260 1", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\321\201\320\272\320\276\320\274\321\203\321\216 \321\201\321\202\320\265\320\277\320\265\320\275\321\214 \320\277\320\276\320\273\320\270\320\275\320\276\320\274\320\260 (K):", nullptr));
        warningLabel3->setText(QCoreApplication::translate("MainWindow", "K \320\264\320\276\320\273\320\266\320\275\320\276 \320\261\321\213\321\202\321\214 \320\261\320\276\320\273\321\214\321\210\320\265 \321\207\320\265\320\274 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
