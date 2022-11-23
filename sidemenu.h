#ifndef SIDEMENU_H
#define SIDEMENU_H
#include <QWidget>
#include <QGraphicsDropShadowEffect>
#include "overlay.h"

namespace Ui {
class sideMenu;
}

class sideMenu : public QWidget
{
    Q_OBJECT
public:
    explicit sideMenu(QWidget *parent = nullptr);
    ~sideMenu();

    //QToolBar* mainMenu = new QToolBar("my Main Menu", this);

private:
    Ui::sideMenu *ui;

};

#endif // SIDEMENU_H
