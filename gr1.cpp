#include "gr1.h"
#include "grafic.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QtGui/QMenuBar>
#include <QWheelEvent>
#include <QtGui/QAction>
#include <QtGui/QMenu>

#include <QtGui>
#include <QRegExp>
#include <QPixmap>


class Grafic;

Gr1::Gr1(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags), FPath(""), Ft("")
{
	setupUi(this);
	pMaingraf = new grafic();
	//ui.setupUi(this);
	createActions();
	createMenus();
	connect(lEd, SIGNAL(textChanged (QString)) , this, SLOT(fileOpen(QString))); 
	connect(pBut1, SIGNAL(clicked()), this, SLOT(Test1()));
	connect(pBEx, SIGNAL(clicked()), this, SLOT(Test2()));
	connect(tableWidget_2, SIGNAL(cellDoubleClicked ( int , int )), this, SLOT(SelectCol(int, int)));
	connect(lEd, SIGNAL(textChanged (QString)) , this, SLOT(fileOpen(QString))); 
}

Gr1::~Gr1()
{

}
bool Gr1::getArg( QStringList args)
{
	
	for (int i = 0; i < args.size(); ++i)
	{
		FPath = ((args).at(i));
		FPath = "F:/home/Gr1/LAT.csv";
	 } 
	lEd->setText(FPath);
	lEd->show();
	return true;
}

bool Gr1::init()
{
	QFont font4( "helvetica", 20 );
	tableWidget->show();
	return(true);
}

void Gr1::createActions()
{ // Пункты Меню
    openAct = new QAction(tr("&Open..."), this);
	connect(openAct, SIGNAL(triggered()), this, SLOT(open()));
	
	openCol1 = new QAction(tr("&Column 1..."), this);
	connect(openCol1, SIGNAL(triggered()), this, SLOT(openTab1()));
	openCol2 = new QAction(tr("&Column 2..."), this);
	connect(openCol2, SIGNAL(triggered()), this, SLOT(openTab2()));
	openCol3 = new QAction(tr("&Column 3..."), this);
	connect(openCol3, SIGNAL(triggered()), this, SLOT(openTab3()));
	openCol4 = new QAction(tr("&Column 4..."), this);
	connect(openCol4, SIGNAL(triggered()), this, SLOT(openTab4()));
	openCol5 = new QAction(tr("&Column 5..."), this);
	connect(openCol5, SIGNAL(triggered()), this, SLOT(openTab5()));
	openCol6 = new QAction(tr("&Column 6..."), this);
	connect(openCol6, SIGNAL(triggered()), this, SLOT(openTab6()));
	openCol7 = new QAction(tr("&Column 7..."), this);
	connect(openCol7, SIGNAL(triggered()), this, SLOT(openTab7()));

    exitAct = new QAction(tr("E&xit..."), this);
    exitAct->setShortcuts(QKeySequence::Quit);
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));

	openGr = new QAction(tr("&Graf..."), this);
	connect(openGr, SIGNAL(triggered()), this, SLOT(Test3()));

    aboutAct = new QAction(tr("&Const..."), this);
    connect(aboutAct, SIGNAL(triggered()), this, SLOT(SprMsg()));

    aboutQtAct = new QAction(tr("&Help1..."), this);
    connect(aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}

void Gr1::createMenus()
{
	// Главы Меню

    fileMenu = new QMenu(tr("&File"), this);
    fileMenu->addAction(openAct);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAct);
	fileMenu->setFont( QFont( "Helvetica", 12 , QFont::Bold, TRUE ) );
	fileMenu->setPalette(QColor(216, 212, 183));

	tableMenu = new QMenu(tr("&Table"), this);
 //   tableMenu->addAction(openCol);
    tableMenu->addSeparator();
 //   tableMenu->addAction(exitTable);
	tableMenu->setFont( QFont( "Helvetica", 12 , QFont::Bold, TRUE ) );
	tableMenu->setPalette(QColor(216, 212, 183));

//**********************
	ColMenu = new QMenu(tr("&Column"), this);
	ColMenu->addAction(openCol1);
	ColMenu->addAction(openCol2);
	ColMenu->addAction(openCol3);
	ColMenu->addAction(openCol4);
	ColMenu->addAction(openCol5);
	ColMenu->addAction(openCol6);
	ColMenu->addAction(openCol7);
	ColMenu->addSeparator();
	ColMenu->setFont( QFont( "Helvetica", 12 , QFont::Bold, TRUE ) );
	ColMenu->setPalette(QColor(216, 212, 183));
//*****************************
	grafMenu = new QMenu(tr("&Graf"), this);
    grafMenu->addAction(openGr);
    grafMenu->addSeparator();
    grafMenu->setFont( QFont( "Helvetica", 12 , QFont::Bold, TRUE ) );
	grafMenu->setPalette(QColor(216, 212, 183));

    helpMenu = new QMenu(tr("&Help"), this);
	helpMenu->addAction(aboutAct);
    helpMenu->addSeparator();
    helpMenu->addAction(aboutQtAct);
	helpMenu->setFont( QFont( "Helvetica", 12 , QFont::Bold, TRUE ) );
	helpMenu->setPalette(QColor(216, 212, 183));

	menuBar()->setFont( QFont( "Helvetica", 15 , QFont::Bold, TRUE ) );
	menuBar()->setPalette(QColor(216, 212, 183));
    menuBar()->addMenu(fileMenu);
	menuBar()->addMenu(grafMenu);
	menuBar()->addMenu(tableMenu);
	menuBar()->addMenu(helpMenu);

	tableMenu->addMenu(ColMenu);
}

void Gr1::Test3()
{
	//pMaingraf->graficInit();
	QGraphicsScene *scene = new QGraphicsScene(this);
	scene->setItemIndexMethod(QGraphicsScene::NoIndex);
	scene->setSceneRect(0, -200, 3000, 400);
	scene->setForegroundBrush(QColor(188, 206, 185, 40));
	setWindowTitle(QObject::tr("П Р О Е К Т 2"));
//	scene->addText("Hello, world!");
	
	QGraphicsView *view= new QGraphicsView(scene);
	
	//	view = new QGraphicsView(scene);
//	scene->setFocus (Qt::MouseFocusReason);
	view->setScene(scene); 
//	view->cacheMode();
	view->centerOn ( 0, 0 );
//	view->sizeHint ();
	view->transform();


//	view(scene);
	pMaingraf->graficInit(scene, mapST, mapA);
//	scene->setFocus (Qt::MouseFocusReason);
	
   view->show();
   
}
void Gr1::Test2()
{

}
void Gr1::Test1()
{
	QPixmap pixmap;
	QFile file("file.png");
	file.open(QIODevice::WriteOnly);
	QDataStream out(&file);   // we will serialize the data into the file
	out << QString("the answer is");   // serialize a string
	
    QByteArray bytes;
    QBuffer buffer(&bytes);
    buffer.open(QIODevice::WriteOnly);
    pixmap.save(&buffer, "PNG");

}
bool Gr1::fileOpen(QString s)
{
	lEd->setEnabled(false);
	// Проверка выбранного файла 
	if ((s.trimmed()).right(4) != ".csv") 
	{
		QMessageBox::information(0, QObject::tr("PROEKT"), tr("<font size=4><b><p>Выборка файла <\b><\p> " ) +  tr("Файл выбран неверно. Нет расширения (.csv)") +  tr("<p>Для выбора файла используется меню \"FILE\"<\p>")); 
		lEd->clear();
		return (false);
	} else {
		lEd->show();
		 mapAllTab();
		 mapATab();
		 
		return (true);
	}

}

int Gr1::AmFile(int _Col)
{
// разбор файла и запись его содержимого в map

	QString sBuf;
	QString G, SCol;
	QByteArray W;
	QTextStream		 oStreamIn;
	QFile			 oFileC;
	oStreamIn.setDevice(&oFileC);
	QRegExp     oRegA("(\\S+),(\\S+),(\\S+),(\\S+),(\\S+),(\\S+),(\\S+),(\\S+)");
	QRegExp     oRegB(",(\\S+),(\\S+),(\\S+),(\\S+),(\\S+),(\\S+),(\\S+)");
	
	stTitc.clear();
	stTitl.clear();

	int tj =0 ; int k; int m; int n; int ICol =0;
	ICol = _Col+ 2;
	
	QString sPathC= FPath;

		oFileC.setFileName(sPathC) ;
		if (!oFileC.open(QIODevice::ReadOnly) )  // | QIODevice::Truncate))
		{
			int FErr= -1;
 		}
		oStreamIn.setDevice(&oFileC);			 // Назначается поток входному файлу
		mapA.clear(); mapAll.clear();
		sBuf= oStreamIn.readLine();
			oRegB.indexIn(sBuf);
			QString x = oRegB.cap(2);
			LabTab2 = oRegB.cap(_Col+1);
			stTitl << oRegB.cap(1)  << oRegB.cap(2) << oRegB.cap(3) << oRegB.cap(4) << oRegB.cap(5) << oRegB.cap(6) << oRegB.cap(7) << oRegB.cap(8);
		while(!oStreamIn.atEnd())			     // Цикл до конца файла
		{
			sBuf= oStreamIn.readLine();
			oRegA.indexIn(sBuf);
			QString a1 = oRegA.cap(1);
			QString a2 = oRegA.cap(2);
			QString a3 = oRegA.cap(3);
			QString a4 = oRegA.cap(4);
			QString a5 = oRegA.cap(5);
			QString a6 = oRegA.cap(6);
			QString a7 = oRegA.cap(7);
			QString a8 = oRegA.cap(8);
			QString a9 = oRegA.cap(9);
			switch(ICol)
			{
				case 2:	SCol = a2;	break;
				case 3:	SCol = a3;	break;
				case 4:	SCol = a4;	break;
				case 5:	SCol = a5;	break;
				case 6:	SCol = a6;	break;
				case 7:	SCol = a7;	break;
				case 8:	SCol = a8;	break;
				case 9:	SCol = a9;	break;
				default:
				break;
			}
			mapAll.insert(tj, SCol);
			mapA.insert(SCol, tj);
			SizA = SCol.size();
			stTitc << a1;
			tj= tj+1;
		}
		m = 0; n = 0;
		
		return (SizA);
}

void Gr1::AmFCol(int Str_a)
{
// Создание map mapST для колоночного представления файла
	QString sBuf;
	QString G, SCol;
	QByteArray W;
	QTextStream		 oStreamIn;
	QFile			 oFileC;
	int m, n;
	
	m = 0; n = 0;
	SizA = Str_a;
	NumColum.clear();	
	mapST.clear();
	for (int k = 0; k < SizA; ++k)
		{
			m = 0;
			W.clear();
			QMap<QString,int>::const_iterator i = mapA.constBegin();
			while (i != mapA.constEnd()) {
				W.insert( 0,(i.key())); 
				int	Wpriz = W.size();
				G = W.at(k); 
				FStr << G;
				i++; m++;
			}
				FStr.removeDuplicates(); 
				if (FStr.size() > 1) NumColum << n;
				mapST.insert(n, FStr);
				W.clear();
				n++;
				m = 0;
					
			FStr.clear();
		}
}

void Gr1::SelectCol(int _XRol,int _XCol)
{
	QString G, SCol, Dop = "~";
	QByteArray W;
	QStringList FNum, FNumP, sPl; 
	int xxcol  = _XCol;
	int xxrow  = _XRol;
	int sSiz = 1;
	QStringList list;
    QString sP ;
    int firstRow = 0;
    int firstCol = 0;

    int secondRow;
    int secondCol = 7;
	int sizMapA = mapA.size();
	int sizrMapA;
	secondRow = sizMapA +1;


	int SizX, c =0, vsize = 0, prizBr = 0, cy = 0;
	QStringList sPL ;
	QTableWidgetItem *tableItem_3 = 0 ;   
	QTableWidgetItem *tableItem_4 = 0 ;
	QTableWidgetItem *tableItem_5 = 0 ;
	QTableWidgetItem *tableItem_S = 0; 
	tableItem_S = new QTableWidgetItem ("Sequences");
	QTableWidgetItem *tableItem_N = 0; 
	tableItem_N = new QTableWidgetItem ("Number of items");

	tableWidget_3->clear();
	tableWidget_4->clear();

	sizrMapA = AmFile(_XCol);
	AmFCol(sizrMapA);
	tableWidget_5->setRowHeight (0, 500 );
	tableWidget_5->setRowHeight (sizrMapA, 500 );
	tableWidget_3->setColumnCount(sizrMapA +2);
	tableWidget_3->setRowCount(sizMapA);
	tabWidget->setTabText(tabWidget->indexOf(tab_3),  LabTab2);
	tableWidget_3->setHorizontalHeaderItem ( sizrMapA, tableItem_S );
	tableItem_S->setFont(QFont( "Helvetica", 8 ));
	tableWidget_3->setHorizontalHeaderItem ( sizrMapA+1, tableItem_N );
	tableItem_N->setFont(QFont( "Helvetica", 8 , QFont::Bold, TRUE));
	
	int r = firstRow;
	
	QMap<QString, int>::const_iterator i = mapA.constBegin();
		while (i != mapA.constEnd()) 
		{
			W.insert( 0,(i.key())); 
			for (int c = firstCol; c < SizA; ++c)
			{
				G = W.at(c); 
				tableItem_3 = new QTableWidgetItem (G);
				for (int j = 0; j < NumColum.size(); ++j)
				{
					if (NumColum.at(j) == c)
					prizBr = 1;	
				}
				if (prizBr == 1)  { tableItem_3->setBackground(QColor(243, 154, 46)); prizBr = 0;}
				tableWidget_3->setItem(r, c, tableItem_3);
			}
		++i;	++r;
		}
		 mapRowTab(xxcol); //
//***************/
		cy = 0;
		QMap<QString, QStringList>::const_iterator iy = mapRow.constBegin();
		while (iy != mapRow.constEnd()) 
		{
			sP = iy.key(); 
	//		tableItem_5 = new QTableWidgetItem(sP);
	//		tableItem_5->setFont(QFont( "Helvetica", 10 , QFont::Bold, TRUE));
	//		tableWidget_5->setRowHeight (c, 100 );
	//		tableWidget_5->setItem(c, 1, tableItem_5);
			sPl =  iy.value(); 
			vsize= sPl.size();
			sP = sPl.join("; ");
			tableWidget_5->setRowHeight (cy, 1000 );
			tableItem_5 = new QTableWidgetItem(sP);	
			tableItem_5->setFont(QFont( "Helvetica", 8));
			tableWidget_3->setItem(cy, sizrMapA, tableItem_5);	
			QString _ssize = QString::number(vsize);
			tableItem_5 = new QTableWidgetItem(_ssize);	
			tableItem_5->setFont(QFont( "Helvetica", 10));
			tableWidget_3->setItem(cy, sizrMapA+1, tableItem_5);	

	//		tableWidget_3->resizeColumnsToContents();
			++iy; cy= cy+1;
		} 
		tableWidget_3->sortItems ( sizrMapA+1,  Qt::DescendingOrder);
	//	tableWidget_3->show();


//***************/

	tableWidget_3->resizeColumnsToContents();
	tableWidget_3->show();
	
	secondRow = 1;
    secondCol = 65;
	r = firstRow;
	SizX = AmFile(xxcol );

	AmFCol(SizX);
	tableWidget_4->clear();

	tableWidget_4->setColumnCount(sizrMapA);
	QMap<int, QStringList>::const_iterator iA = mapST.constBegin();
		while (iA != mapST.constEnd()) 
		{
			sPL =  iA.value(); 
			vsize= sPL.size();
			sP = sPL.join(" ~ ");
			tableItem_4 = new QTableWidgetItem(sP);	
			if (vsize > 1)
		//		tableItem_4->setBackground(QColor(0, 245, 255));
				tableItem_4->setBackground(QColor(243, 154, 46));
			tableWidget_4->setItem(0, c, tableItem_4);	
			tableWidget_4->resizeColumnsToContents();
			
			++iA; c= c+1;
	}
	tableWidget_4->show();

//	 mapRowTab(xxcol); //
	 tableWidget_2->show();
}

void Gr1::open()
{
//****Выбор файла для обработки
	QStringList list;
	QString sP;
	QString sFPath = "";
	QFileDialog::Options options = QFileDialog::DontResolveSymlinks | QFileDialog::DontUseNativeDialog;

	QString directory = QFileDialog::getOpenFileName ( this,  QObject::tr("Выбор каталога с файлами для кодировки"),  sFPath, (tr("Images (*.csv *.jpg)")), 0, options);

	if (!directory.isEmpty())
	FPath =directory;
   
	 if ( fileOpen(FPath) == true )
	 {
		lEd->setText(FPath);
		lEd->show();
		mapAllTab();
		mapATab();
	 }
}

void Gr1::openTab1()
{
	int Col = 0;
	int Row = 0;
	SelectCol(Row,Col);
}
void Gr1::openTab2()
{
	int Col = 1;
	int Row = 1;
	SelectCol(Row,Col);
}
void Gr1::openTab3()
{
	int Col = 2;
	int Row = 1;
	SelectCol(Row,Col);
}
void Gr1::openTab4()
{
	int Col = 3;
	int Row = 1;
	SelectCol(Row,Col);
}
void Gr1::openTab5()
{
	int Col = 4;
	int Row = 1;
	SelectCol(Row,Col);
}
void Gr1::openTab6()
{
	int Col = 5;
	int Row = 1;
	SelectCol(Row,Col);
}
void Gr1::openTab7()
{
	int Col = 6;
	int Row = 1;
	SelectCol(Row,Col);
}

void Gr1:: mapAllTab()
{
	QStringList list;
	QString sP;
    QString op = "0";
    int firstRow = 0;
    int firstCol = 0;
    int secondRow = 100;
    int secondCol = 7;
	QTableWidgetItem *tableItem_1 = 0 ;
	tableWidget->clear();
	int r = firstRow;
	for (int c = firstCol; c < secondCol; ++c)
	{
		AmFile(c);

		QMap<int, QString>::const_iterator i = mapAll.constBegin();
		while (i != mapAll.constEnd()) 
		{
			sP =  i.value(); 
			++i;
  			tableItem_1 = new QTableWidgetItem (sP);	
			tableWidget->setItem(r, c, tableItem_1);
			++r;
		}		
		r = firstRow;
	}
/****  ?????????????????*/
 QFont font;
 font.setFamily(QString::fromUtf8("Arial"));
// font.setBold (true); 
 font.setPointSize(10);
 tableWidget->setFont(font);
/****/
	tableWidget->resizeColumnsToContents();
	tableWidget->setHorizontalHeaderLabels(stTitl);
	tableWidget->setFont(font);
	tableWidget->setVerticalHeaderLabels(stTitc);
	tabWidget->setTabText(tabWidget->indexOf(tab),  FPath);
	tableWidget->show();
}

void Gr1:: mapATab()
{
	QStringList list;
	QString sP;
    QString op = "0";
    int firstRow = 0;
    int firstCol = 0;
    int secondRow =1;
    int secondCol = 7;
	QTableWidgetItem *tableItem_2 = 0 ;
	tableWidget_2->clear();
	int sizMapA = 1; 
	int r = firstRow;
	for (int c = firstCol; c < secondCol; ++c)
	{
		AmFile(c);
		if (sizMapA < mapA.size())  sizMapA = mapA.size(); 
		QMap<QString, int>::const_iterator ii = mapA.constBegin();
		while (ii != mapA.constEnd()) 
		{
			sP =  ii.key(); 
			++ii;
  			tableItem_2 = new QTableWidgetItem (sP);	
			tableWidget_2->setItem(r, c, tableItem_2);
			++r;
		}		
		r = firstRow;
	}
	
	tableWidget_2->setRowCount(sizMapA);
	tableWidget_2->resizeColumnsToContents();
	tabWidget->setTabText(tabWidget->indexOf(tab_2),  FPath);
	tableWidget_2->setHorizontalHeaderLabels(stTitl);
	tableWidget_2->show();
}

void Gr1:: mapRowTab(int _Col)
{
	QStringList FNum; 
	QString sP;
	QStringList sPl;
	QString AS, Imrow; 
	int As1;
	int n = 0;
	int c = 0;
	int numN = 0;
	int vsize = 0;
	QTableWidgetItem *tableItem_5 = 0 ;
	tableWidget_5->clear();
	mapRow.clear();

	Imrow = (stTitc.at(0).left(4));

		QMap<QString, int>::const_iterator ii = mapA.constBegin();
		while (ii != mapA.constEnd()) 
		{
			FNum.clear();
			sP =  ii.key(); 
			numN = 0;
			QMap<int, QString>::const_iterator iall = mapAll.constBegin();
			while (iall != mapAll.constEnd()) {
				if (sP ==  iall.value()) {
					As1 = iall.key();
					AS = QString::number(As1+1); 
					if (numN == 20)
					{
						FNum << "\n\r";
						numN = 0;
					} else {
					
					FNum << (Imrow + AS);
					mapRow.insert(sP, FNum);
					numN = numN + 1;
					}
				}
				iall++; n++;
			}
			++ii;
		}
		int sizMapR = mapRow.size();
//		tableWidget_5->setColumnCount(sizrMapA);
		tableWidget_5->setRowCount(sizMapR);
		c = 0;
		QMap<QString, QStringList>::const_iterator i = mapRow.constBegin();
		while (i != mapRow.constEnd()) 
		{
			sP = i.key(); 
			tableItem_5 = new QTableWidgetItem(sP);
			tableItem_5->setFont(QFont( "Helvetica", 10 , QFont::Bold, TRUE));
			tableWidget_5->setRowHeight (c, 100 );
			tableWidget_5->setItem(c, 1, tableItem_5);
			sPl =  i.value(); 
			vsize= sPl.size();
			sP = sPl.join("; ");
		//	tableWidget_5->sortItems ( 2,  Qt::DescendingOrder);
			tableItem_5 = new QTableWidgetItem(sP);	
			tableWidget_5->setItem(c, 0, tableItem_5);	
			QString _ssize = QString::number(vsize);
			tableItem_5 = new QTableWidgetItem(_ssize);	
			tableItem_5->setFont(QFont( "Helvetica", 14 , QFont::Bold, TRUE));
			tableWidget_5->setItem(c, 2, tableItem_5);	

			tableWidget_5->resizeColumnsToContents();
			++i; c= c+1;
		} 
		tableWidget_5->sortItems ( 2,  Qt::DescendingOrder);
		tableWidget_5->show();
}

void Gr1::SprMsg()
{
	QPixmap pix;
	QString sPathIm= qApp->applicationDirPath() + "/Protein1.png";
	QString sPathImp= qApp->applicationDirPath() + "/Prot.png";
	bool PP = pix.load(sPathIm);
	QGraphicsScene *scene = new QGraphicsScene(this);
	scene->setSceneRect(-10, -50, 600, 800);
	
	QGraphicsView *view= new QGraphicsView(scene);
	view->setWindowTitle(QObject::tr("С П Р А В К А"));
	
	scene->addPixmap(QPixmap(sPathIm)); 
		
	view->setScene(scene);
	QPainter painter;
	scene->render(&painter ) ;   //  .save ( sPathImp );

	view->show(); 
	QImage image;
	image.copy ( 0, -30, 2000, 90 ); 
		
 }
