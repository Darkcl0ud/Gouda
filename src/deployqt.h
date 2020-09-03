#ifndef DEPLOYQT_H
#define DEPLOYQT_H

#include <QMainWindow>
#include <QFileDialog>
#include <QProcess>
#include <QMessageBox>


namespace Ui {
class DeployQt;
}

class DeployQt : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeployQt(QWidget *parent = nullptr);
    ~DeployQt();

private slots:
    void on_CancelButton_clicked();

    void on_QtBinDirBrowse_clicked();

    void on_QtInputExeBrowse_clicked();

    void on_DeployButton_clicked();


private:
    Ui::DeployQt *ui;
    QString binFolderName;
    QString exeName;
    QMessageBox msgBox;
};

#endif // DEPLOYQT_H
