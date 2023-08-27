#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
//
#include <AppWidget.h>

int main(int argc, char *argv[])
{
        QApplication app(argc, argv);

        AppWidget *widget = new AppWidget;
        widget->show();

        return app.exec();
}
