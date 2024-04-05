#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <QWidget>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QTabWidget>
#include <QTableWidget>

namespace Ui {
class management;
}

class management : public QWidget
{
    Q_OBJECT

public:
    explicit management(QWidget *parent = nullptr);
    ~management();

    void setscretch(QTableWidget* A);

private:
    Ui::management *ui;
};

#endif // MANAGEMENT_H
