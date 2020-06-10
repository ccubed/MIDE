#ifndef MIDE_H
#define MIDE_H

#include <QMainWindow>

namespace Ui {
class MIDE;
}

class MIDE : public QMainWindow
{
    Q_OBJECT

public:
    explicit MIDE(QWidget *parent = 0);
    ~MIDE();

private:
    Ui::MIDE *ui;
};

#endif // MIDE_H
