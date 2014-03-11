#include <QApplication>
#include "html5applicationviewer.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Html5ApplicationViewer viewer;
    viewer.setOrientation(Html5ApplicationViewer::ScreenOrientationAuto);
    viewer.showExpanded();
    if(argc < 2)
        viewer.loadUrl(QUrl(QLatin1String("http://localhost")));
    else
        viewer.loadUrl(QUrl(QLatin1String(argv[1])));
    viewer.showFullScreen();
    viewer.setCursor(Qt::BlankCursor);

    return app.exec();
}
