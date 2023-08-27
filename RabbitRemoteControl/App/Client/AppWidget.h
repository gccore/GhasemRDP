#pragma once

#include <QtWidgets/QWidget>

class MainWindow;

class AppWidget : public QWidget {
        Q_OBJECT

    public:
        AppWidget(QWidget *const parent = nullptr);

    private:
        MainWindow *w;
};
