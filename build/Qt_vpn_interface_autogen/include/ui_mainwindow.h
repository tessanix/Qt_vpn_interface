/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *main_vertical_layout;
    QWidget *titleBar_widget;
    QWidget *widget;
    QHBoxLayout *titleBarLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *menuButton;
    QLabel *mainTitle;
    QWidget *pages_container;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(678, 650);
        verticalLayoutWidget = new QWidget(MainWindow);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 402, 651));
        main_vertical_layout = new QVBoxLayout(verticalLayoutWidget);
        main_vertical_layout->setSpacing(0);
        main_vertical_layout->setObjectName("main_vertical_layout");
        main_vertical_layout->setSizeConstraint(QLayout::SetDefaultConstraint);
        main_vertical_layout->setContentsMargins(0, 0, 0, 0);
        titleBar_widget = new QWidget(verticalLayoutWidget);
        titleBar_widget->setObjectName("titleBar_widget");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleBar_widget->sizePolicy().hasHeightForWidth());
        titleBar_widget->setSizePolicy(sizePolicy);
        titleBar_widget->setMinimumSize(QSize(400, 53));
        titleBar_widget->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(titleBar_widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 399, 51));
        titleBarLayout = new QHBoxLayout(widget);
        titleBarLayout->setSpacing(0);
        titleBarLayout->setObjectName("titleBarLayout");
        titleBarLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(10, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        titleBarLayout->addItem(horizontalSpacer);

        menuButton = new QPushButton(widget);
        menuButton->setObjectName("menuButton");
        sizePolicy.setHeightForWidth(menuButton->sizePolicy().hasHeightForWidth());
        menuButton->setSizePolicy(sizePolicy);
        menuButton->setMinimumSize(QSize(0, 50));
        menuButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/menu-icon"), QSize(), QIcon::Normal, QIcon::Off);
        menuButton->setIcon(icon);
        menuButton->setIconSize(QSize(30, 30));

        titleBarLayout->addWidget(menuButton);

        mainTitle = new QLabel(widget);
        mainTitle->setObjectName("mainTitle");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        mainTitle->setFont(font);
        mainTitle->setStyleSheet(QString::fromUtf8(""));
        mainTitle->setAlignment(Qt::AlignCenter);

        titleBarLayout->addWidget(mainTitle);


        main_vertical_layout->addWidget(titleBar_widget);

        pages_container = new QWidget(verticalLayoutWidget);
        pages_container->setObjectName("pages_container");
        pages_container->setMinimumSize(QSize(0, 0));

        main_vertical_layout->addWidget(pages_container);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Form", nullptr));
        menuButton->setText(QString());
        mainTitle->setText(QCoreApplication::translate("MainWindow", "Import Profiles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
