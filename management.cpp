#include "management.h"
#include "ui_management.h"

    management::management(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::management)
{
    ui->setupUi(this);
    setWindowTitle("管理员界面");

    // 创建 QTabWidget
    QTabWidget *mytab = new QTabWidget(this);
    // 创建用户界面的容器
    QWidget *userContainer = new QWidget();
    QVBoxLayout *userLayout = new QVBoxLayout(userContainer);
    // 创建用户界面表格
    QTableWidget *usertable = new QTableWidget(10, 8);
    QStringList header;
    header << "Id" << "Age" << "Sex" << "Username" << "Passwaord" << "IdNumber" << "Nickname" << "PhoneNumber";
    usertable->setHorizontalHeaderLabels(header);
    setscretch(usertable);
    userLayout->addWidget(usertable);

    // 创建司机界面的容器和滚动区域，步骤与用户界面相同
    QWidget *driverContainer = new QWidget();
    QVBoxLayout *driverLayout = new QVBoxLayout(driverContainer);
    QTableWidget *drivertable = new QTableWidget(10, 10);
    header.clear();
    header << "Id" << "Age" << "Sex" << "Username" << "Password" << "IdNumber" << "Drivingname" << "Driverstate" << "DrivingCarId" << "PhoneNumber";
    drivertable->setHorizontalHeaderLabels(header);
    setscretch(drivertable);
    driverLayout->addWidget(drivertable);

    // 创建订单界面的容器和滚动区域，步骤与用户界面相同
    QWidget *orderContainer = new QWidget();
    QVBoxLayout *orderLayout = new QVBoxLayout(orderContainer);
    QTableWidget *ordertable = new QTableWidget(10, 7);
    header.clear();
    header << "Id" << "Start" << "Destination" << "Time" << "Passngerid" << "PassengerNickname" << "Driverid";
    ordertable->setHorizontalHeaderLabels(header);
    setscretch(ordertable);
    orderLayout->addWidget(ordertable);


    // 将三个容器添加到 QTabWidget
    mytab->addTab(userContainer, "用户界面");
    mytab->addTab(driverContainer, "司机界面");
    mytab->addTab(orderContainer, "订单界面");

    // 创建一个 QVBoxLayout 作为主窗口的布局
    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    // 将 QTabWidget 添加到 QVBoxLayout 中
    mainLayout->addWidget(mytab);

    // 设置主窗口的布局为 QVBoxLayout
    this->setLayout(mainLayout);
    // 设置窗口大小
    this->resize(800, 600);
}

management::~management()
{
    delete ui;
}

void management::setscretch(QTableWidget* A)
{
    A->resizeColumnsToContents();
}
