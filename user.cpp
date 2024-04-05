#include "user.h"
#include "ui_user.h"

user::user(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
    setWindowTitle("用户界面");
    setFixedSize(800, 600);

}

user::~user()
{
    delete ui;
}
