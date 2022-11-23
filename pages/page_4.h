#ifndef PAGE_4_H
#define PAGE_4_H

#include <QPushButton>
#include <QButtonGroup>
#include <QWidget>

namespace Ui {
class Page_4;
}

class Page_4 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_4(QWidget *parent = nullptr);
    ~Page_4();
    bool eventFilter(QObject *watched, QEvent *event);
public slots:
    void change_color_vpn_proto_section(QAbstractButton *button);
    void change_color_connect_timeout_section(QAbstractButton *button);
    void change_color_software_update_section(QAbstractButton *button);
    void change_color_theme_color_section(QAbstractButton *button);
    void change_color_tray_icon_section(QAbstractButton *button);
    void change_color_confirm_dialogs_section(QAbstractButton *button);

private:
    QButtonGroup* buttons_vpn_proto_section = new QButtonGroup(this);
    QButtonGroup* buttons_connect_timeout_section = new QButtonGroup(this);
    QButtonGroup* buttons_software_update_section = new QButtonGroup(this);
    QButtonGroup* buttons_theme_color_section = new QButtonGroup(this);
    QButtonGroup* buttons_tray_icon_style_section = new QButtonGroup(this);
    QButtonGroup* buttons_confirm_dialogs_section = new QButtonGroup(this);

   // QList<QList<QPushButton *>> sections;
    Ui::Page_4 *ui;
};

#endif // PAGE_4_H
