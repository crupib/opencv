#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_2->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString fileName =
            QFileDialog::getOpenFileName(this, tr("Open Image"), ".",
                       tr("Image Files (*.png *.jpg *.jpeg *.bmp)"));
    image = cv::imread(fileName.toLatin1().data());
    cv::cvtColor(image,image,CV_BGR2RGB);
    // Qt image
    QImage img= QImage((const unsigned char*)(image.data),
                       image.cols,image.rows,QImage::Format_RGB888);
    // display on label
    ui->label->setPixmap(QPixmap::fromImage(img));
    // resize the label to fit the image
    ui->label->resize(ui->label->pixmap()->size());
   // cv::namedWindow("Original Image");
   // cv::imshow("Original Image", image);
    ui->pushButton_2->setEnabled(true);
}

void MainWindow::on_pushButton_2_clicked()
{
    cv::flip(image,image,1);
//    cv::namedWindow("Output Image");
//    cv::cvtColor(image,image,CV_BGR2RGB);
    // Qt image
    QImage img = QImage((const unsigned char*)(image.data),
                       image.cols,image.rows,QImage::Format_RGB888);
    // display on label
    ui->label->setPixmap(QPixmap::fromImage(img));
    // resize the label to fit the image
    ui->label->resize(ui->label->pixmap()->size());
    ui->pushButton_2->setEnabled(false);
}
