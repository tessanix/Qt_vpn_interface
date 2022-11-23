#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtWidgets>
//#include <QMainWindow>
#include "page_1.h"
#include "page_2.h"
#include "page_3.h"
#include "page_4.h"
#include "page_5.h"
#include "overlay.h"
#include "sidemenu.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget //QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
    QStackedLayout* main_stacked_layout = new QStackedLayout();
    bool eventFilter(QObject *watched, QEvent *event);

protected:

signals:

public slots:
    //void shadowPage();
    void enable_menu_button();
    void disable_menu_button();
    void hide_menu();
    void show_menu();
//    void showMenu();
//    void hideMenu();

//    void turn_on_shadow();
//    void turn_off_shadow();

    void raise_page_1();
    void raise_page_2();
    void raise_page_3();
    void raise_page_4();
    void raise_page_5();


private:

    Overlay * shadowOverlay = new Overlay(this);

    Page_1* page_1 = new Page_1();
    Page_2* page_2 = new Page_2();
    Page_3* page_3 = new Page_3();
    Page_4* page_4 = new Page_4();
    Page_5* page_5 = new Page_5();


    sideMenu* sideMenuWidget  = new sideMenu(this);

    QAction* click_menu = new QAction(QIcon(":/icons/menu_button_icon"), QString{}, nullptr);


    QPropertyAnimation* anim_sidemenu_show = new QPropertyAnimation(sideMenuWidget, "pos", this);
    QPropertyAnimation* anim_sidemenu_hide = new QPropertyAnimation(sideMenuWidget, "pos", this);

    QParallelAnimationGroup *anim_group_show = new QParallelAnimationGroup(this);
    QParallelAnimationGroup *anim_group_hide = new QParallelAnimationGroup(this);

    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
