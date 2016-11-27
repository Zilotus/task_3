#include <QtGlobal>
#if QT_VERSION < 0x050000
#include <QtGui>
#else
#include <QtWidgets>
#endif

using namespace std;

int main(int argc, char *argv[])
{
QApplication app(argc,argv);

QWidget *widget = new QWidget;
QPushButton *quitButton = new QPushButton("Quit");
QRadioButton *radio1 = new QRadioButton("radio 1");
QRadioButton *radio2 = new QRadioButton("radio 2");
QRadioButton *radio3 = new QRadioButton("radio 3");
QVBoxLayout *buttonLayout = new QVBoxLayout;

buttonLayout->addWidget(radio1);
buttonLayout->addWidget(radio2);
buttonLayout->addWidget(radio3);
buttonLayout->addWidget(quitButton);

QObject::connect(quitButton,SIGNAL(clicked()),qApp,SLOT(quit()));
QObject::connect(radio1,SIGNAL(clicked()),qApp,SLOT(setText_2()));
QObject::connect(radio2,SIGNAL(clicked()),qApp,SLOT(setText_2()));
QObject::connect(radio3,SIGNAL(clicked()),qApp,SLOT(setText_2()));

widget->setLayout(buttonLayout);
widget->setWindowFlags(Qt::Window);
widget->show();

return app.exec();
}
