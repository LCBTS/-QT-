#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_2,&QPushButton::clicked,this,[=](){

           QString data("123456789");
           QString data1= ui->lineEdit_2->text();
                  if (data!= data1)
                  {
            if(QMessageBox::Ok== QMessageBox::warning(this,"error","密码错误", QMessageBox:: Ok| QMessageBox::Cancel,QMessageBox::Cancel))
                   {
                    ui->label_2->setText("密码错误");
                    }

                  }
                   if (data == data1)
                   {
                       if(QMessageBox::Ok== QMessageBox::information(this,"恭喜","密码正确", QMessageBox:: Ok| QMessageBox::Cancel,QMessageBox::Cancel))

                       {

                       ui->label_2->setText("密码正确");
                        }
                   }


});
}

MainWindow::~MainWindow()
{
    delete ui;
}
