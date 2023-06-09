#ifndef FIRST_PAGE_H
#define FIRST_PAGE_H

//#include "ui_page_1.h"
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QPropertyAnimation>
#include "../custom_objects/thememanager.h"

namespace Ui {
class Page_1;
}

class Page_1 : public QWidget
{
    Q_OBJECT
public:
    explicit Page_1( ThemeManager* thememanager, QWidget *parent = nullptr);
    ~Page_1();
    bool eventFilter(QObject *watched, QEvent *event);

public slots:
    void show_subpage_url();
    void show_subpage_file();

private:

    Ui::Page_1 *ui;



    ThemeManager* thememanager_ptr = nullptr;
    QPropertyAnimation* anim_url_subpage_show = new QPropertyAnimation(this);
    QPropertyAnimation* anim_file_subpage_show = new QPropertyAnimation(this);


    //sideMenu* child_widget;
//    QLabel* a_label = new QLabel(QString("hey this is a label!"), nullptr);
//    QVBoxLayout* first_page_layout = new QVBoxLayout(nullptr);


};

#endif // FIRST_PAGE_H
