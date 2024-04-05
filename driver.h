#ifndef DRIVER_H
#define DRIVER_H

#include <QWidget>
#include <QTabWidget>


namespace Ui {
class driver;
}

class driver : public QWidget
{
    Q_OBJECT

public:
    explicit driver(QWidget *parent = nullptr);
    ~driver();

private:
    Ui::driver *ui;
};

#endif // DRIVER_H
