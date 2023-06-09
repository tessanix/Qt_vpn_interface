#include <QtWidgets>
#include <QSizePolicy>
#include <QResizeEvent>
#include <QWidget>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(): QWidget(), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(400,650);


    ui->menuButton->installEventFilter(this);

    ui->pages_container->setLayout(main_stacked_layout);

    main_stacked_layout->addWidget(page_1);
    main_stacked_layout->addWidget(page_2);
    main_stacked_layout->addWidget(page_3);
    main_stacked_layout->addWidget(page_4);
    main_stacked_layout->addWidget(page_5);

    ui->menuButton->setCheckable(true);
    ui->titleBarLayout->setAlignment( ui->menuButton, Qt::AlignVCenter);


    connect(ui->menuButton, SIGNAL(clicked()),
            this, SLOT(show_menu()));

//    connect(ui->menuButton, SIGNAL(clicked()),
//                      this, SLOT(turn_on_shadow()));

//    connect(ui->menuButton, SIGNAL(clicked()),
//            this, SLOT(disable_menu_button()));

//    //enable menu button when animation finished
//    connect(anim_sidemenu_hide, SIGNAL(finished()),
//            this, SLOT(enable_menu_button()));


    // OVERLAY AND SIDEMENU INITIAL POSITIONS
    shadowOverlay->setGeometry(QRect(x(), y(), width(), height()));
    shadowOverlay->raise();

    sideMenuWidget->setGeometry(QRect(-width()*0.7, y(), width()*0.7, height()));
    sideMenuWidget->raise();

    // SETUP "SHOW" AND "HIDE" ANIMATIONS
    anim_sidemenu_show->setDuration(250);
    anim_sidemenu_show->setStartValue(QPoint(-width()*0.7, y()));
    anim_sidemenu_show->setEndValue(QPoint(x(), y()));

    anim_sidemenu_hide->setDuration(250);
    anim_sidemenu_hide->setStartValue(QPoint(x(), y()));
    anim_sidemenu_hide->setEndValue(QPoint(-width()*0.7, y()));

    // ANIMATIONS GROUPS ALLOW ANIMATIONS TO RUN IN PARALLEL
    anim_group_show->addAnimation(anim_sidemenu_show);
    anim_group_show->addAnimation(shadowOverlay->anim_opacity_increase);

    anim_group_hide->addAnimation(anim_sidemenu_hide);
    anim_group_hide->addAnimation(shadowOverlay->anim_opacity_decrease);

    //anim_group_hide->resume();
    hide_menu();

    mythememanager->set_general_theme();
}


void MainWindow::show_menu(){
    shadowOverlay->disable_mouse_event(false);
    anim_group_show->start();
}
void MainWindow::hide_menu(){
    shadowOverlay->disable_mouse_event(true);
    anim_group_hide->start();
}

void MainWindow::enable_menu_button(){
    ui->menuButton->setEnabled(true);
}

void MainWindow::disable_menu_button(){
    ui->menuButton->setEnabled(false);
}


void  MainWindow::raise_page_1(){
    main_stacked_layout->setCurrentIndex(0);
    ui->mainTitle->setText("Import Profiles");
    hide_menu();
}

void MainWindow::raise_page_2(){
    main_stacked_layout->setCurrentIndex(1);
    ui->mainTitle->setText("Proxies");
    hide_menu();
}


void  MainWindow::raise_page_3(){
    main_stacked_layout->setCurrentIndex(2);
    ui->mainTitle->setText("Certificates & Tokens");
    hide_menu();
}

void MainWindow::raise_page_4(){
    main_stacked_layout->setCurrentIndex(3);
    ui->mainTitle->setText("Settings");
    hide_menu();
}


void MainWindow::raise_page_5(){
    main_stacked_layout->setCurrentIndex(4);
    ui->mainTitle->setText("Statistics");
    hide_menu();
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched->metaObject()->className() == QString("QPushButton")){

        if( event->type() == QEvent::Enter){
           setCursor(QCursor(Qt::PointingHandCursor));
           return true;
        }
        else if(event->type() == QEvent::Leave){
           setCursor(QCursor(Qt::ArrowCursor));
           return true;
       }
       return false;
    }
    // pass the event on to the parent class
    return false;
}


