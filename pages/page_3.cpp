#include "page_3.h"
#include "ui_page_3.h"

Page_3::Page_3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_3)
{
    ui->setupUi(this);
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



    connect(ui->show_subpage_pkcs_button, SIGNAL(clicked()),
           this              , SLOT(show_subpage_certif_pkcs()));


    connect(ui->show_subpage_hardware_button, SIGNAL(clicked()),
            this             , SLOT(show_subpage_certif_hardware()));

    ui->show_subpage_pkcs_button->setDisabled(true);

}


void Page_3::show_subpage_certif_pkcs(){
    ui->sub_widget_pkcs->setStyleSheet("background-color: rgb(230, 115, 0);");
    ui->show_subpage_pkcs_button->setStyleSheet("color:rgb(230, 115, 0);");

    ui->show_subpage_hardware_button->setStyleSheet("color: rgb(9, 56, 94);");
    ui->sub_widget_hardware->setStyleSheet("");

    ui->show_subpage_pkcs_button->setDisabled(true);
    ui->show_subpage_hardware_button->setEnabled(true);
    anim_pkcs_subpage_show->start();
}

void Page_3::show_subpage_certif_hardware(){
    ui->sub_widget_hardware->setStyleSheet("background-color: rgb(230, 115, 0);");
    ui->show_subpage_hardware_button->setStyleSheet("color:rgb(230, 115, 0);");

    ui->show_subpage_pkcs_button->setStyleSheet("color: rgb(9, 56, 94);");
    ui->sub_widget_pkcs->setStyleSheet("");

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
