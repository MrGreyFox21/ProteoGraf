#include "gr1.h"
#include <QtGui/QApplication>
#include <QtCore/qtextcodec.h>
#include <qmessagebox.h>
#include <qmenubar.h> 

#include <qstringlist.h>


int main(int argc, char *argv[])
{
QStringList args;
args << "" << "";

	QApplication a(argc, argv);

	QTextCodec* c= QTextCodec::codecForName("Windows-1251");
	if(c)	QTextCodec::setCodecForTr(c);

		
	args = a.arguments();

	Gr1 w;

	w.getArg(QStringList(args));
	w.init();

	w.show();
	return a.exec();
}
