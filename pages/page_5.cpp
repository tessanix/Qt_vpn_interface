#include "page_5.h"
#include "ui_page_5.h"

Page_5::Page_5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_5)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_StyledBackground);

}

Page_5::~Page_5()
{
    delete ui;
}
