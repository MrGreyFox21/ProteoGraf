#ifndef GR1_H
#define GR1_H

#include <QtGui/QMainWindow>
#include <QPixmap>
#include "ui_gr1.h"
#include "grafic.h"


class grafic;

class Gr1 : public QMainWindow, public Ui_Gr1Class
{
	Q_OBJECT

public:
	Gr1(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Gr1();
	
	bool init();
	bool getArg(QStringList args);
	int AmFile(int _Col);
	void AmFCol(int Str_a);
	

	QMap<int, QStringList> mapST;
	QMap<QString, QStringList> mapRow;
	QMap<QString, int> mapA;
	QMap<int, QString> mapAll;  
	int SizA;
	int PrFile;
	QStringList stTitl;			// Заголовки ctolbcov
	QStringList stTitc;			// Заголовки ctrok
	QString LabTab2;
	QList<int> NumColum;

private:

	void createActions();
    void createMenus();
	void mapAllTab();
	void mapATab();
	void mapRowTab(int _Col);

	QString FPath;			// Путь для размещения файлов
	QString Ft;				// Запас
	QString FileName;		// имя файла
	QStringList  FStr;
	Ui::Gr1Class ui;
	grafic *pMaingraf;
	QMenu *fileMenu;
	QMenu *grafMenu;
    QMenu *helpMenu;
	QMenu *tableMenu;

	QMenu *ColMenu;

    QAction *assistantAct;
    QAction *clearAct;
    QAction *openAct;
	QAction *openGr;
	QAction *exitAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
	QAction *openTable;
    QAction *exitTable;

	QAction *openCol1; QAction *openCol2; QAction *openCol3; QAction *openCol4;
	QAction *openCol5; QAction *openCol6; QAction *openCol7;

	
private slots:
	void Test1();
	void Test2();
	void Test3();
	void SprMsg();
	bool fileOpen(QString s);
	void SelectCol(int XRol, int XCol);
	void open();
	void openTab1();
	void openTab2();
	void openTab3();
	void openTab4();
	void openTab5();
	void openTab6();
	void openTab7();
};

#endif // GR1_H
