#include "deployqt.h"
#include "ui_deployqt.h"
#include <QDebug>



DeployQt::DeployQt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeployQt)
{
    ui->setupUi(this);
}

DeployQt::~DeployQt()
{
    delete ui;
}

void DeployQt::on_CancelButton_clicked()
{
    this->close();
}


void DeployQt::on_QtBinDirBrowse_clicked()
{
    binFolderName = QFileDialog::getExistingDirectory(this,       // Open folder select dialog, default to 5.14.2\mingw73_64\bin, store in binFolderName
        tr("Open Bin Directory"), "C:\\Qt\\5.14.2\\mingw73_64\\bin",QFileDialog::DontResolveSymlinks);

   if(!binFolderName.isEmpty()){        // If binFolderName is not empty, set it to QtBindirOut LineOutput
           ui->QtBinDirOut->setText(binFolderName);
           binFolderName = binFolderName + "/windeployqt.exe "; // append /windeployqt.exe to binFolderName
}
}


void DeployQt::on_QtInputExeBrowse_clicked()
{
    exeName = QFileDialog::getOpenFileName(this,      // Open exe to be deployed select dialog, sets to exeName
         tr("Select Exe to Deploy"), "C:\\");

    if(!exeName.isEmpty()){                // If exeName is not empty, set it to QtInputExeOut LineOutput
            ui->QtInputExeOut->setText(exeName);
 }
}


void DeployQt::on_DeployButton_clicked()
{
    QProcess *process = new QProcess(this);
    ui->statusbar->showMessage("Running: " + binFolderName + exeName);         // Set status bar message to reflect running command
    process->start("cmd", QStringList() << "/c" << binFolderName << exeName);


    if ( !process->waitForFinished(-1))    // Wait for process to finish
    {
        return;                            // Return from if statement, to continue
    }



    if(process->exitCode() != 0){
        QString errorMessage;
        if(binFolderName == ""){
            errorMessage.append("No Bin Folder Selected!\n");
        }

        if(exeName == ""){
            errorMessage.append("No Exe File Selected! ");
        }

        msgBox.setText(errorMessage);
        msgBox.setWindowTitle("Error - Deploy Qt Exe (Windows)");
        msgBox.exec();
    }

    else{
        ui->statusbar->showMessage("Complete!");
    }


}
