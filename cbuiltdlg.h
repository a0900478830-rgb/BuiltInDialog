#ifndef CBUILTDLG_H
#define CBUILTDLG_H

#include <QDialog>
#include <QtWidgets>
class CBuiltDlg : public QDialog
{
    Q_OBJECT

public:
     CBuiltDlg(QWidget *parent = 0);
    ~CBuiltDlg() ;
private:
    QTextEdit* displayTextEdit;
    QPushButton* colorPushBtn;
    QPushButton* errorPushBtn;
    QPushButton* filePushBtn;
    QPushButton* fontPushBtn;
    QPushButton* inputPushBtn;
    QPushButton* pagePushBtn;
    QPushButton* progressPushBtn;
    QPushButton* printPushBtn;
private slots:
    void doPushBtn();
};
#endif // CBUILTDLG_H
