#include <QApplication>

#include "mainwindow.h"
#include <QObject>
#include <QFile>

int main(int argc, char *argv[])
{
//    char argv1[] = "-qwindowgeometry 100x100+50+50";
//    char parameter1[] = "-qwindowgeometry 100x100+50+50";
//    argv[0] = {parameter1};
    QApplication app(argc, argv);

   // set app style sheet
//    QFile styleSheetFile(":/stylesheets/Diz_theme");

//    if(styleSheetFile.open(QFile::ReadOnly)){
//        QString styleSheet = QLatin1String(styleSheetFile.readAll());
//        app.setStyleSheet(styleSheet);
//    }

    MainWindow mainWin;
    mainWin.setWindowTitle(QString("Dizalty VPN"));
    mainWin.show();

    return app.exec();
}
