/********************************************************************************
** Form generated from reading UI file 'page_5.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_5_H
#define UI_PAGE_5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_5
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *Page_5)
    {
        if (Page_5->objectName().isEmpty())
            Page_5->setObjectName("Page_5");
        Page_5->resize(400, 608);
        gridLayoutWidget = new QWidget(Page_5);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 30, 321, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 3, 1, 1, 1);


        retranslateUi(Page_5);

        QMetaObject::connectSlotsByName(Page_5);
    } // setupUi

    void retranslateUi(QWidget *Page_5)
    {
        Page_5->setWindowTitle(QCoreApplication::translate("Page_5", "Form", nullptr));
        label->setText(QCoreApplication::translate("Page_5", "<html><head/><body><p>BYTES IN</p><p><span style=\" font-size:20pt;\">0 Bytes</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Page_5", "<html><head/><body><p>PACKETS IN </p><p><span style=\" font-size:20pt;\">0</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Page_5", "<html><head/><body><p>PACKETS OUT</p><p><span style=\" font-size:20pt;\">0</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Page_5", "<html><head/><body><p>BYTES OUT</p><p><span style=\" font-size:20pt;\">0 BYTES</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Page_5", "<html><head/><body><p>TUN BYTES IN</p><p><span style=\" font-size:20pt;\">0 Bytes</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Page_5", "<html><head/><body><p>TUN BYTES OUT</p><p><span style=\" font-size:20pt;\">0 Bytes</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Page_5", "<html><head/><body><p>TUN PACKETS IN</p><p><span style=\" font-size:20pt;\">0</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Page_5", "<html><head/><body><p>TUN PACKETS OUT</p><p><span style=\" font-size:20pt;\">0</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_5: public Ui_Page_5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_5_H
