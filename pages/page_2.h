#ifndef PAGE_2_H
#define PAGE_2_H

#include <QWidget>

namespace Ui {
class Page_2;
}

class Page_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_2(QWidget *parent = nullptr);
    ~Page_2();

protected:
    bool eventFilter(QObject *watched, QEvent *event);

private:
    Ui::Page_2 *ui;
};

#endif // PAGE_2_H
