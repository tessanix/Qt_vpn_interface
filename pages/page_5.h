#ifndef PAGE_5_H
#define PAGE_5_H

#include <QWidget>

namespace Ui {
class Page_5;
}

class Page_5 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_5(QWidget *parent = nullptr);
    ~Page_5();

private:
    Ui::Page_5 *ui;
};

#endif // PAGE_5_H
