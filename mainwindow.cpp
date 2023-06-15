#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    std::string home_file_path = "C:\\Users\\ngjwo\\Documents\\Qt\\CS144_Project\\";
    song_player.addSongToList(home_file_path + "songs\\Baby Come Back.mp3");
    song_player.addSongToList(home_file_path + "songs\\Blackbird (Remastered 2009).mp3");
    song_player.addSongToList(home_file_path + "songs\\California Dreamin'.mp3");
    song_player.addSongToList(home_file_path + "songs\\Can't Help Falling In Love.mp3");
    song_player.addSongToList(home_file_path + "songs\\Careless Whisper.mp3");
    song_player.addSongToList(home_file_path + "songs\\Don't Go Breaking My Heart.mp3");
    song_player.addSongToList(home_file_path + "songs\\Don't Speak.mp3");
    song_player.addSongToList(home_file_path + "songs\\Every Breath You Take.mp3");
    song_player.addSongToList(home_file_path + "songs\\Everybody Wants To Rule The World.mp3");
    song_player.addSongToList(home_file_path + "songs\\Fly Me To The Moon (2008 Remastered).mp3");
    song_player.addSongToList(home_file_path + "songs\\Girls Just Want to Have Fun.mp3");
    song_player.addSongToList(home_file_path + "songs\\Here Comes The Sun.mp3");
    song_player.addSongToList(home_file_path + "songs\\Hey Jude (Remastered 2015).mp3");
    song_player.addSongToList(home_file_path + "songs\\I'm Still Standing.mp3");
    song_player.addSongToList(home_file_path + "songs\\It's Been a Long, Long Time.mp3");
    song_player.addSongToList(home_file_path + "songs\\Just the Two of Us (feat. Bill Withers).mp3");
    song_player.addSongToList(home_file_path + "songs\\What A Wonderful World.mp3");
    song_player.addSongToList(home_file_path + "songs\\Yesterday (Remastered 2009).mp3");

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    song_player.stopSong();
}

void MainWindow::on_pushButton_clicked()
{
    song_player.stopSong();
    song_player.playSong(0);
}
void MainWindow::on_pushButton_3_clicked()
{
    song_player.stopSong();
    song_player.playSong(1);
}
void MainWindow::on_pushButton_6_clicked()
{
    song_player.stopSong();
    song_player.playSong(2);
}
void MainWindow::on_pushButton_9_clicked()
{
    song_player.stopSong();
    song_player.playSong(3);
}
void MainWindow::on_pushButton_11_clicked()
{
    song_player.stopSong();
    song_player.playSong(4);
}
void MainWindow::on_pushButton_13_clicked()
{
    song_player.stopSong();
    song_player.playSong(5);
}
void MainWindow::on_pushButton_8_clicked()
{
    song_player.stopSong();
    song_player.playSong(6);
}
void MainWindow::on_pushButton_10_clicked()
{
    song_player.stopSong();
    song_player.playSong(7);
}
void MainWindow::on_pushButton_4_clicked()
{
    song_player.stopSong();
    song_player.playSong(8);
}
void MainWindow::on_pushButton_5_clicked()
{
    song_player.stopSong();
    song_player.playSong(9);
}
void MainWindow::on_pushButton_12_clicked()
{
    song_player.stopSong();
    song_player.playSong(10);
}
void MainWindow::on_pushButton_18_clicked()
{
    song_player.stopSong();
    song_player.playSong(11);
}
void MainWindow::on_pushButton_17_clicked()
{
    song_player.stopSong();
    song_player.playSong(12);
}
void MainWindow::on_pushButton_16_clicked()
{
    song_player.stopSong();
    song_player.playSong(13);
}
void MainWindow::on_pushButton_15_clicked()
{
    song_player.stopSong();
    song_player.playSong(14);
}
void MainWindow::on_pushButton_7_clicked()
{
    song_player.stopSong();
    song_player.playSong(15);
}
void MainWindow::on_pushButton_14_clicked()
{
    song_player.stopSong();
    song_player.playSong(16);
}
void MainWindow::on_pushButton_19_clicked()
{
    song_player.stopSong();
    song_player.playSong(17);
}
