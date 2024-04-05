#include "map.h"
#include "ui_map.h"

map::map(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::map)
{
    ui->setupUi(this);
    this->setWindowTitle("订单界面");
    // 创建 QImage 对象，并加载图片文件
    QPixmap pixmap(":/map.jpg");
    ui->label->setPixmap(pixmap);

    // 启用内容缩放
    ui->label->setScaledContents(true);
}

map::~map()
{
    delete ui;
}
