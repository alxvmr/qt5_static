#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    QPushButton qPushButton("Hello Qt");
    qPushButton.show();
    return app.exec();
}
