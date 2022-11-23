#include "page_2.h"
#include "ui_page_2.h"

Page_2::Page_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_2)
{
    ui->setupUi(this);
    //setAttribute(Qt::WA_StyledBackground);
    ui->add_proxy_button->installEventFilter(this);
    ui->verticalLayout->setAlignment(ui->proxy_pixmap, Qt::AlignHCenter);
    //ui->verticalLayout->setAlignment(ui->label, Qt::AlignHCenter);
    ui->verticalLayout->setAlignment(ui->add_proxy_button, Qt::AlignRight);


    //setStyleSheet("background-color: blue");
    //setMinimumSize(400,400);
    //setSizePolicy(QSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum));

}


bool Page_2::eventFilter(QObject *watched, QEvent *event)
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

Page_2::~Page_2()
{
    delete ui;
}
