#include "AppWidget.h"
//
#include "mainwindow.h"
#include <QtWidgets/QLayout>
#include <QApplication>
#include <QSettings>
#include <QDebug>
#include <QtGlobal>
#include <QSharedPointer>
#if defined(Q_OS_ANDROID) && (QT_VERSION >= QT_VERSION_CHECK(5, 7, 0)) && \
        (QT_VERSION < QT_VERSION_CHECK(6, 0, 0))
#include <QtAndroid>
#endif

#include "RabbitCommonTools.h"
#include "RabbitCommonDir.h"

#ifdef HAVE_UPDATE
#include "FrmUpdater/FrmUpdater.h"
#endif

#include <QLoggingCategory>

AppWidget::AppWidget(QWidget *const parent)
        : QWidget(parent)
{
        RabbitCommon::CTools::Instance()->Init();
        QTranslator tApp;
        if (tApp.load(RabbitCommon::CDir::Instance()->GetDirTranslations() +
                      QDir::separator() + "RabbitRemoteControlApp_" +
                      QLocale::system().name() + ".qm"))
                qApp->installTranslator(&tApp);

        w = new MainWindow(this);
        w->show();
}
