#include "sidemenu.h"
#include "ui_sidemenu.h"
#include "button_icon.h"
//#include <QFile>

sideMenu::sideMenu(QWidget *parent):
    QWidget{parent}, ui(new Ui::sideMenu)
{
       // setAttribute(Qt::WA_SetStyle	);
      ui->setupUi(this);
      setAttribute(Qt::WA_StyledBackground);
      //setAutoFillBackground(true);

//    QFile styleSheetFile(":/stylesheets/sideMenu_style");

//    if(styleSheetFile.open(QFile::ReadOnly)){
//        QString styleSheet = QLatin1String(styleSheetFile.readAll());
//        setStyleSheet(styleSheet);
//    }


      //setStyleSheet(  "background-color:   #ff6699");
//    setToolButtonStyle(Qt::ToolButtonTextBesideIcon	);
//    setIconSize(QSize(30,30));
//
// ###########################################################################
// ####################### ACTION IMPORT FILES ##############################
// ###########################################################################

    ui->import_profile_button->setPixmap(QPixmap(":/icons/profile_save").scaled(20,20));
    connect(ui->import_profile_button, SIGNAL(clicked()),
            parent      , SLOT(raise_page_1()));


//// ###########################################################################
//// ########################## ACTION PROXY ###################################
//// ###########################################################################

    ui->proxies_button->setPixmap(QPixmap(":/icons/proxy-icon").scaled(20,20));
    connect(ui->proxies_button, SIGNAL(clicked()),
            parent      , SLOT(raise_page_2()));


//// ###########################################################################
//// ####################### ACTION CERTIF ##############################
//// ###########################################################################
    ui->certif_button->setPixmap(QPixmap(":/icons/certif-icon").scaled(20,20));
    connect(ui->certif_button, SIGNAL(clicked()),
            parent      , SLOT(raise_page_3()));


//// ###########################################################################
//// ####################### ACTION SETTINGS ##############################
//// ###########################################################################

    ui->settings_button->setPixmap( QPixmap(":/icons/settings-icon").scaled(20,20));
    connect(ui->settings_button, SIGNAL(clicked()),
            parent      , SLOT(raise_page_4()));


//// ###########################################################################
//// ####################### ACTION STATS ##############################
//// ###########################################################################

    ui->statistic_button->setPixmap( QPixmap(":/icons/statistics-icon").scaled(20,20));
    connect(ui->statistic_button, SIGNAL(clicked()),
            parent      , SLOT(raise_page_5()));


}

sideMenu::~sideMenu()
{
    delete ui;
}
