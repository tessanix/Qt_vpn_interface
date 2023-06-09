#include "page_3.h"
#include "ui_page_3.h"

Page_3::Page_3(ThemeManager* thememanager, QWidget *parent) :
    QWidget(parent), thememanager_ptr{thememanager}, ui(new Ui::Page_3)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_StyledBackground);

    resize(400, height());
    // INSTALL CURSOR ICON CHANGING ON BUTTONS
    ui->show_subpage_pkcs_button->installEventFilter(this);
    ui->show_subpage_hardware_button->installEventFilter(this);
    ui->add_certificate_button->installEventFilter(this);

    // CENTER COMPENENTS
    ui->pkcs_subpage_layout->setAlignment( ui->add_certificate_button, Qt::AlignHCenter);
    ui->pkcs_subpage_layout->setAlignment( ui->certificate_label_pixmap, Qt::AlignHCenter);
    ui->hardware_subpage_layout->setAlignment( ui->hardware_label_pixmap, Qt::AlignHCenter);

    // SETUP ANIMATIONS
    anim_hardware_subpage_show->setTargetObject(ui->slider_container_widget);
    anim_hardware_subpage_show->setPropertyName("pos");
    anim_hardware_subpage_show->setDuration(250);
    anim_hardware_subpage_show->setStartValue(QPoint(x(), ui->slider_container_widget->y()));
    anim_hardware_subpage_show->setEndValue(QPoint(-width(), ui->slider_container_widget->y()));

    anim_pkcs_subpage_show->setTargetObject(ui->slider_container_widget);
    anim_pkcs_subpage_show->setPropertyName("pos");
    anim_pkcs_subpage_show->setDuration(250);
    anim_pkcs_subpage_show->setStartValue(QPoint(-width(), ui->slider_container_widget->y()));
    anim_pkcs_subpage_show->setEndValue(QPoint(x(), ui->slider_container_widget->y()));


    ui->show_subpage_pkcs_button->setCheckable(true);
    ui->show_subpage_hardware_button->setCheckable(true);

    connect(ui->show_subpage_pkcs_button, SIGNAL(clicked()),
           this              , SLOT(show_subpage_certif_pkcs()));


    connect(ui->show_subpage_hardware_button, SIGNAL(clicked()),
            this             , SLOT(show_subpage_certif_hardware()));

    ui->show_subpage_pkcs_button->setDisabled(true);
    ui->show_subpage_pkcs_button->setChecked(true);

    //ui->sub_widget_pkcs->setStyleSheet("background-color:rgb(63,186,170);"); //rgb(230, 115, 0);";

}



void Page_3::show_subpage_certif_pkcs(){
//    thememanager_ptr->set_color_subpages_buttons(
//                1, ui->sub_widget_pkcs, ui->show_subpage_pkcs_button,
//                   ui->sub_widget_hardware, ui->show_subpage_hardware_button);
    ui->show_subpage_hardware_button->setChecked(false);
    ui->show_subpage_pkcs_button->setDisabled(true);
    ui->show_subpage_hardware_button->setEnabled(true);
    anim_pkcs_subpage_show->start();
}

void Page_3::show_subpage_certif_hardware(){
//    thememanager_ptr->set_color_subpages_buttons(
//                2, ui->sub_widget_pkcs, ui->show_subpage_pkcs_button,
//                   ui->sub_widget_hardware, ui->show_subpage_hardware_button);
    ui->show_subpage_pkcs_button->setChecked(false);
    ui->show_subpage_hardware_button->setDisabled(true);
    ui->show_subpage_pkcs_button->setEnabled(true);
    anim_hardware_subpage_show->start();
}

bool Page_3::eventFilter(QObject *watched, QEvent *event)
{
    if (watched->metaObject()->className() == QString("QPushButton")){

        if(event->type() == QEvent::Enter){
            setCursor(QCursor(Qt::PointingHandCursor));
            return true;
        }
        else if(event->type() == QEvent::Leave){
            setCursor(QCursor(Qt::ArrowCursor));
            return true;
        }
        return false;
    }
    return false;
}

Page_3::~Page_3()
{
    delete ui;
}
