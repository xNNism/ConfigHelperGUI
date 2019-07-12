#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QProcess>
#include <QPushButton>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/xnn/Projects/untitled/archlinux-logo-white.png");
    ui->label->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   QString path = "/home/xnn/Projects/untitled/";
   QString  command("bash");
   QStringList params = QStringList() << "install_nettools.sh";

   QProcess *process = new QProcess();
   process->startDetached(command, params, path);
   process->waitForFinished();
   process->close();
}

void MainWindow::on_pushButton_3_clicked()
{
   QString path = "/home/xnn/Projects/untitled/";
   QString  command("bash");
   QStringList params = QStringList() << "update_mirrorlist.sh";

   QProcess *process = new QProcess();
   process->startDetached(command, params, path);
   process->waitForFinished();
   process->close();
}

void MainWindow::on_pushButton_4_clicked()
{
   QString path = "/home/xnn/Projects/untitled/";
   QString  command("bash");
   QStringList params = QStringList() << "upgrade.sh";

   QProcess *process = new QProcess();
   process->startDetached(command, params, path);
   process->waitForFinished();
   process->close();
}

void MainWindow::on_pushButton_11_clicked()
{
   QString path = "/home/xnn/Projects/untitled/";
   QString  command("bash");
   QStringList params = QStringList() << "install_progtools.sh";

   QProcess *process = new QProcess();
   process->startDetached(command, params, path);
   process->waitForFinished();
   process->close();
}

void MainWindow::on_pushButton_10_clicked()
{
   QString path = "/home/xnn/Projects/untitled/";
   QString  command("bash");
   QStringList params = QStringList() << "install_mediatools.sh";

   QProcess *process = new QProcess();
   process->startDetached(command, params, path);
   process->waitForFinished();
   process->close();
}

void MainWindow::on_pushButton_2_clicked()
{
   QString path = "/home/xnn/Projects/untitled/";
   QString  command("bash");
   QStringList params = QStringList() << "install_systools.sh";

   QProcess *process = new QProcess();
   process->startDetached(command, params, path);
   process->waitForFinished();
   process->close();
}

void MainWindow::on_pushButton_5_clicked()
{
   QString path = "/home/xnn/Projects/untitled/";
   QString  command("bash");
   QStringList params = QStringList() << "set_themes.sh";

   QProcess *process = new QProcess();
   process->startDetached(command, params, path);
   process->waitForFinished();
   process->close();
}

void MainWindow::on_pushButton_6_clicked()
{
   QString path = "/home/xnn/Projects/untitled/";
   QString  command("bash");
   QStringList params = QStringList() << "set_icons.sh";

   QProcess *process = new QProcess();
   process->startDetached(command, params, path);
   process->waitForFinished();
   process->close();
}

void MainWindow::on_pushButton_7_clicked()
{
   QString path = "/home/xnn/Projects/untitled/";
   QString  command("bash");
   QStringList params = QStringList() << "set_fonts.sh";

   QProcess *process = new QProcess();
   process->startDetached(command, params, path);
   process->waitForFinished();
   process->close();
}
