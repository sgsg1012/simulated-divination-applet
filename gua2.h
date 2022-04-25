#ifndef GUA2_H
#define GUA2_H

#include <QWidget>

namespace Ui {
class gua2;
}

class gua2 : public QWidget
{
    Q_OBJECT

public:
    explicit gua2(QWidget *parent = nullptr);
    ~gua2();

private:
    Ui::gua2 *ui;
};

#endif // GUA2_H
