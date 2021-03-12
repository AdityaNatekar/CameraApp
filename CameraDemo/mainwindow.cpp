#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QCamera>
#include<QCameraViewfinder>
#include<QCameraImageCapture>
#include<QMessageBox>
#include<QVBoxLayout>
#include<QCameraInfo>
#include<QDebug>
#include<QUrl>
#include<QCameraViewfinderSettings>
#include<QPixmap>
#include<QtWidgets>
#include<QProcess>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    foreach (const QCameraInfo &cameraInfo, cameras) {

        if(cameraInfo.deviceName()=="/dev/video0")
        {
           Camera= new QCamera(cameraInfo);
           Camera1setup();

        }
        if(cameraInfo.deviceName()=="/dev/video1")
        {
            Camera2= new QCamera(cameraInfo);
            Camera2setup();
        }
    }

        ui->label->setVisible(true);
        ui->close->setStyleSheet("background-color:gray;border-radius:10px;color:white");


       QCameraViewfinderSettings setting;

       //capture image
       CameraImageCapture= new QCameraImageCapture(Camera,this);
       CameraImageCapture2= new QCameraImageCapture(Camera2,this);

       vw= new QVideoWidget;
       player= new QMediaPlayer;

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::Camera1setup()
{
    CameraViewfinder= new QCameraViewfinder(this);
    layout =new QVBoxLayout;
    Camera->setViewfinder(CameraViewfinder);
    layout->addWidget(CameraViewfinder);
    layout->setMargin(0);
    ui->scrollArea->setLayout(layout);
}

void MainWindow::Camera2setup()
{
    CameraViewfinder2= new QCameraViewfinder(this);
    layout2 =new QVBoxLayout;
    Camera2->setViewfinder(CameraViewfinder2);
    layout2->addWidget(CameraViewfinder2);
    layout2->setMargin(0);
    ui->scrollArea_2->setLayout(layout2);
}


void MainWindow::on_pushButton_rec_stop_pressed()
{
    ui->pushButton_rec_stop->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(214, 214, 214, 255), stop:1 rgba(255, 0, 0, 255));border-radius:10px;");
    if(Video_flag==1)
    Camera->stop();
    else
    Camera2->stop();
}


void MainWindow::on_pushButton_rec_stop_released()
{
    ui->pushButton_rec_stop->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(214, 214, 214, 255));border-radius:10px;");


    if(Video_flag==1)
    {
          QProcess OProcess1;
          QString Command = "/opt/CAMERA/video0script.dat";
          OProcess1.start(Command,args,QIODevice::ReadWrite);
          OProcess1.waitForFinished(-1);
    }
    else if(Video_flag==2)
    {
        QProcess OProcess2;
        QString Command = "/opt/CAMERA/video1script.dat";
        OProcess2.start(Command,args,QIODevice::ReadWrite);
        OProcess2.waitForFinished(-1);

    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("録画するにはビデオを開始してください");
        msgBox.exec();
    }

         if(Video_flag==1)
         {
          Camera->start();
         }
         else if(Video_flag==2)
         {
          Camera2->start();
         }
}

void MainWindow::on_pushButton_play_pressed()
{
    ui->pushButton_play->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(164, 164, 214, 255), stop:1 rgba(0, 33, 255, 255));border-radius:10px;");
}

void MainWindow::on_pushButton_play_released()
{
    ui->pushButton_play->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(0, 33, 255, 255), stop:1 rgba(164, 164, 214, 255));border-radius:10px;");


       //FROM QPROCESS
       QProcess OProcess;
       OProcess.start("gst-play-1.0 /opt/CAMERA/CameraDemo.avi");
       OProcess.waitForFinished(-1);
}

void MainWindow::on_pushButton_shutter_pressed()
{
    ui->pushButton_shutter->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(247, 255, 0, 255));border-radius:10px;");

}

void MainWindow::on_pushButton_shutter_released()
{
    ui->pushButton_shutter->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(247, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));border-radius:10px;");

   //NOTE:THIS IS FOR CAMERA ONE ONLY
    if(Video_flag==1)
    {
        CameraImageCapture->capture("/opt/CAMERA/image");
        CameraImageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
        Camera->setCaptureMode(QCamera::CaptureStillImage);
        Shutter_flag=1;
    }
    else if(Video_flag==2)
    {
        CameraImageCapture2->capture("/opt/CAMERA/image");
        CameraImageCapture2->setCaptureDestination(QCameraImageCapture::CaptureToFile);
        Camera2->setCaptureMode(QCamera::CaptureStillImage);
        Shutter_flag=2;
    }
    else
        {
            QMessageBox msgBox;
            msgBox.setText("カメラを起動してください");
            msgBox.exec();
        }
}

void MainWindow::on_pushButton_photo_pressed()
{
    ui->pushButton_photo->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(234, 181, 255, 255), stop:1 rgba(119, 0, 219, 255));border-radius:10px;");
}

void MainWindow::on_pushButton_photo_released()
{
    ui->label->setVisible(false);
    ui->pushButton_photo->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(119, 0, 219, 255), stop:1 rgba(234, 181, 255, 255));border-radius:10px;");
    ui->pushButton_video_Switch->setEnabled(true);
    ui->pushButton_rec_stop->setStyleSheet("background-color:gray;border-radius:10px");
    //ui->pushButton_play->setStyleSheet("background-color:gray;border-radius:10px");
    ui->pushButton_shutter->setStyleSheet("background-color:gray;border-radius:10px");
    ui->pushButton_rec_stop->setEnabled(false);
    ui->pushButton_play->setEnabled(true);
    ui->pushButton_shutter->setEnabled(false);
    ui->stackedWidget->setCurrentIndex(2);
    QPixmap image("/opt/CAMERA/image.jpg");
    ui->DisplayCapturedImage->setPixmap(image);

}

void MainWindow::on_pushButton_video_Switch_pressed()
{
    ui->pushButton_video_Switch->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(234, 181, 255, 255), stop:1 rgba(27, 121, 177, 255));border-radius:10px;");
}

void MainWindow::on_pushButton_video_Switch_released()
{
    ui->label->setVisible(true);
    ui->pushButton_video_Switch->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(27, 121, 177, 255), stop:1 rgba(234, 181, 255, 255));border-radius:10px;");
    ui->pushButton_play->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(0, 33, 255, 255), stop:1 rgba(164, 164, 214, 255));border-radius:10px;");
    ui->pushButton_rec_stop->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(214, 214, 214, 255));border-radius:10px;");
    ui->pushButton_shutter->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.502507, y1:1, x2:0.503, y2:0.0170455, stop:0 rgba(247, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));border-radius:10px;");
    ui->pushButton_rec_stop->setEnabled(true);
    ui->pushButton_play->setEnabled(true);
    ui->pushButton_shutter->setEnabled(true);

    if(ui->pushButton_video_Switch->text()== tr("VIDEO1"))
    { vw->hide();
      ui->label->setText("**Camera1");
      Video_flag=1;
      ui->stackedWidget->setCurrentIndex(0);
      ui->pushButton_video_Switch->setText("VIDEO2");

      Camera2->stop();
      Camera->start();
    }
    else
    {
       vw->hide();
       ui->label->setText("**Camera2");
       Video_flag=2;
       ui->stackedWidget->setCurrentIndex(1);
       ui->pushButton_video_Switch->setText("VIDEO1");
       Camera->stop();
       Camera2->start();
    }
}

void MainWindow::videorecordinfo()
{
    QString str = QString("Recorded %1 sec").arg(recorder->duration()/1000);
    ui->label->setText(str);
}


void MainWindow::on_close_pressed()
{
   ui->close->setStyleSheet("color:red; background-color:gray;border-radius:10px");
}

void MainWindow::on_close_released()
{
    ui->close->setStyleSheet("color:white; background-color:gray; border-radius:10px");
    QMessageBox MsgClose;
    MsgClose.setIcon(QMessageBox::Question);
    MsgClose.setText("アプリケーションを閉じますか？");
    MsgClose.setStandardButtons(QMessageBox::Yes);
    MsgClose.setButtonText(QMessageBox::Yes, tr("はい"));
    MsgClose.addButton(QMessageBox::No);
    MsgClose.setButtonText(QMessageBox::No, tr("いいえ"));

    if(MsgClose.exec()== QMessageBox::Yes)
     {
        QApplication::quit();
     }
    else
        MsgClose.close();
}
