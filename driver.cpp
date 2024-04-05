#include "driver.h"
#include "ui_driver.h"

driver::driver(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::driver)
{
    ui->setupUi(this);
    setWindowTitle("司机界面");



}

driver::~driver()
{
    delete ui;
}
