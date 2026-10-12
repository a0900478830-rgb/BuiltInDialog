#include "cbuiltdlg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CBuiltDlg w;
    w.show();
    return QApplication::exec();
}
