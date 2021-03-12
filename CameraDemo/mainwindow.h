#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QCamera>
#include<QCameraViewfinder>
#include<QCameraImageCapture>
#include<QVideoEncoderSettings>
#include<QVBoxLayout>
#include<QMultimedia>
#include<QMediaRecorder>
#include<QVideoEncoderSettings>
#include<QProcess>
#include<QMediaPlayer>
#include<QVideoWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_pushButton_rec_stop_pressed();

    void on_pushButton_rec_stop_released();

    void on_pushButton_play_pressed();

    void on_pushButton_play_released();

    void on_pushButton_shutter_pressed();

    void on_pushButton_shutter_released();

    void on_pushButton_photo_pressed();

    void on_pushButton_photo_released();

    void on_pushButton_video_Switch_pressed();

    void on_pushButton_video_Switch_released();

    void on_close_pressed();

    void on_close_released();

private:
    Ui::MainWindow *ui;

    QCamera *Camera;

    QCamera *Camera2;

    QCameraViewfinder *CameraViewfinder;

    QCameraViewfinder *CameraViewfinder2;

    QCameraImageCapture *CameraImageCapture;

    QCameraImageCapture *CameraImageCapture2;

    QImageEncoderSettings *ImageEncoderSettings;

    QVBoxLayout *layout;

    QVBoxLayout *layout2;

    QVBoxLayout *layout3;

    QCameraInfo *cameraInfo;

    QMediaRecorder *recorder;

    QVideoEncoderSettings *settings;

    QProcess *OProcess;

    QMediaPlayer *player;

    QVideoWidget *vw;

    int Init_flag=0;

    int Video_flag=0; //to recognise operational camera

    int Shutter_flag=0;  // to restart respective camera after photo is viewed   

    void videorecordinfo();

    void Camera1setup();

    void Camera2setup();

    QStringList args;
};
#endif // MAINWINDOW_H
