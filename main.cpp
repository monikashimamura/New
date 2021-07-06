#include "widgetlog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WidgetLog w;
    w.show();
    return a.exec();
}
