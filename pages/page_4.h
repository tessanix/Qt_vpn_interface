#ifndef PAGE_4_H
#define PAGE_4_H

#include <QPushButton>
#include <QButtonGroup>
#include <QWidget>
#include "../custom_objects/thememanager.h"

namespace Ui {
class Page_4;
}

class Page_4 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_4(ThemeManager* thememanager,QWidget *parent = nullptr);
    ~Page_4();
    bool eventFilter(QObject *watched, QEvent *event);



public slots:

    // void manage_sections(QAbstractButton *button);

private:
    ThemeManager* thememanager_ptr = nullptr;

    QString button_unchecked_style = "background-color:rgb(255,255,255);"
                                   "border-color: rgb(157, 152, 168);"
                                   "color: rgb(157, 152, 168);";

    QString button_checked_style = "background-color:rgb(19,171,148);" /*rgb(63,186,170);"*/
                                   "color:rgb(255,255,255);";

    QButtonGroup* buttons_vpn_proto_section = new QButtonGroup(this);
    QButtonGroup* buttons_connect_timeout_section = new QButtonGroup(this);
    QButtonGroup* buttons_software_update_section = new QButtonGroup(this);
    QButtonGroup* buttons_theme_color_section = new QButtonGroup(this);
    QButtonGroup* buttons_tray_icon_style_section = new QButtonGroup(this);
    QButtonGroup* buttons_confirm_dialogs_section = new QButtonGroup(this);

//    QList<QButtonGroup*> list_of_sections
//                        {buttons_vpn_proto_section, buttons_connect_timeout_section,
//                         buttons_software_update_section, buttons_theme_color_section,
//                         buttons_tray_icon_style_section, buttons_confirm_dialogs_section};
   // QList<QList<QPushButton *>> sections;
    Ui::Page_4 *ui;
};

#endif // PAGE_4_H
