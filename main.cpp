#include "widget.h"
#include "driver.h"
#include "user.h"
#include "map.h"
#include <QFile>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 1、应用全局加载样式表
    QFile qss(":/demo.qss");
    if (qss.open(QFile::ReadOnly))
    {
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
    else{
        qDebug("Open qss failed");
    }

    Widget w;
    w.show();

    management myman;
    myman.show();

    driver mydr;
    mydr.show();

    user myuser;
    myuser.show();

    map mymap;
    mymap.show();

    return a.exec();
}
