#include "grafic.h"
#include "gr1.h"
#include <QtGui>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QWheelEvent>
#include <QPointF>
#include <QPainter>

#include <math.h>
//char* Amin[] = {"G", "A", "V", "L", "I", "M", "F", "W", "P", "S","T", "C", "Y", "N", "Q", "D", "E", "K", "R", "H"};
QByteArray Amin("GAVLIMFWPSTCYNQDEKRH-");
static const double Pi = 3.14159265358979323846264338327950288419717;
static double TwoPi = 2.0 * Pi;
grafic::grafic()
{
	

}
void grafic::graficInit(QGraphicsScene *scene, QMap<int, QStringList> mapST, QMap<QString, int> mapA)
{

	/*QGraphicsScene *scene = new QGraphicsScene(this);
	scene->setItemIndexMethod(QGraphicsScene::NoIndex);
	//scene->setSceneRect(0, 0, 0, 0);
	scene->setForegroundBrush(QColor(188, 206, 185, 127));
	setWindowTitle(QObject::tr("Ï Ð Î Å Ê Ò 1"));
	scene->addText("Hello, world!");
	//QGraphicsView *view= new QGraphicsView(scene);
	
		view = new QGraphicsView(scene);
	
	view->setScene(scene);
//	view(scene);*/

	


/*	QGraphicsScene *scene = new QGraphicsScene(this);
	scene->setItemIndexMethod(QGraphicsScene::NoIndex);
	scene->setSceneRect(0, -200, 10000, 400);
	scene->setForegroundBrush(QColor(188, 206, 185, 127));
	setWindowTitle(QObject::tr("Ï Ð Î Å Ê Ò 1"));
	setScene(scene);
	QGraphicsView view(scene);
		setScene(scene);

	 view.show();*/
//	view = new QGraphicsView(scene);
//	QPolygonF polygon;
	int x = 10;
	xOld = 0; yOld = 0;
	int y = 0;
	int a =0;
	int AmNum = 0, Prob = 0;
	int PrizCol, Ppos;
	QString dd;
	int b =255;
	int c =0;
	int sizA = 0;
	int numGr = 0;
	QString G, SCol, Dop = "~";
	QString  Gt, St;
	int StN = 0;
	QByteArray W;
	QList<int> list;
//	AmFile();
	AmCol();
/*|||||||||||||||||||||||||||||||*/	
	mapTz.clear();
	QMap<int, QStringList>::const_iterator it = mapST.constBegin();
	while (it != mapST.constEnd()) {
     stl << it.value();
	 Prob = it.key();
	 x = x+50; y = 0;
	 AmNum  = stl.size();
	 for (int j = 0; j < stl.size(); ++j)
	 {
        dd = stl.at(j); 
		QMap<int,StuctT *>::const_iterator h = mapAC.constBegin();
		while (h != mapAC.constEnd()) 
		{
			StuctT* pStuctTabl;
			pStuctTabl = h.value();
			if (dd == pStuctTabl->kodAm)
			{
				PrizCol = pStuctTabl->Cpriz;
			}
			++h;
		}
				StuctTz *recordTz= new StuctTz;
				recordTz = new StuctTz;
				StuctTz *pTzItem = recordTz;
				pTzItem->Name = dd;  
				pTzItem->Cpr = PrizCol;  
				pTzItem->X = x;  
				switch(AmNum)
				{
				case 1:	// Odna Am
						y= 0;
				break;
				case 2:	// 
					if ( j == 0) y = 30;
					else 	y= -30;
				break;
				case 3:	// 
					if ( j == 0) y = 60;
					if ( j == 1) y = 0;
					if ( j == 2) y= -60;
				break;
				case 4:	// 
					if ( j == 0) y = 90;
					if ( j == 1) y = 30;
					if ( j == 2) y = -30;
					else 	y= -90;
				break;
				case 5:	// 
					if ( j == 0) y = 120;
					if ( j == 1) y = 60;
					if ( j == 2) y = 0;
					if ( j == 3) y = -60;
					if ( j == 4) y = -120;
				break;
				default:
					break;
				}
				pTzItem->Y = y;  
				pTzItem->Siz = AmNum;
				mapTz.insert(pTzItem, Prob); 
		 }
	  ++it; stl.clear();
	}
/*|||||||||||||||||||||||||||||||*/	
	QMap<int, QStringList>::const_iterator i = mapST.constBegin();
	while (i != mapST.constEnd()) {
//		Ppos = 0; 
//		xOld = 50; yOld = 0;
     stl << i.value();
	 x = x+50; y = 0;
	 for (int j = 0; j < stl.size(); ++j)
	 {
        dd = stl.at(j); 
		QMap<int,StuctT *>::const_iterator h = mapAC.constBegin();
		while (h != mapAC.constEnd()) 
		{
		StuctT* pStuctTabl;
		pStuctTabl = h.value();
		if (dd == pStuctTabl->kodAm)
		{
			PrizCol = pStuctTabl->Cpriz;
			if (stl.size() == 1) y = 0;
			if (stl.size() == 2) y = -((-1)*j*60 +30);
			if (stl.size() == 3) y = -((-1)*j*30 +30);
//			
/***************************************************************/
			StuctGr *recordGr= new StuctGr;
			recordGr = new StuctGr;
			StuctGr *pGrItem = recordGr;
			pGrItem->NaAm = dd;  
			pGrItem->Cpr = PrizCol;  
			pGrItem->Xx = x;  
			pGrItem->Yy = y;  
			pGrItem->xOld = xOld;
			pGrItem->yOld = yOld;
			pGrItem->OldAm = " ";
			mapGr.insert(numGr, pGrItem); 
			++numGr;	
	//		xOld = x; yOld = y;
	}
/***************************************************************/
	/* 			y = 0;
				addCircle(x, y,PrizCol, scene);
				addName(x, y, dd, scene);
				addlin(x, y, xOld, yOld, PrizCol, scene);
				xOld = x;  yOld = y;
				if (Ppos == 1)	{ xOld = x; yOld = y;}
//				addlin(x, y, xOld, yOld, PrizCol, scene);
				Ppos = 0;

			if (stl.size() > 1)
			{
				Ppos = Ppos +1;
	 			y = -((-1)*j*60 +30);
				addCircle(x, y,PrizCol, scene);
				addName(x, y, dd, scene);
				addlin(x, y, xOld, yOld, PrizCol, scene);
				addlin(x, y, xOld, y, PrizCol, scene);
				xOld = x; yOld = yOld;
				addlin(x, y, xOld, yOld, PrizCol, scene);
	//			if (Ppos == 1)	{ xOld = x; yOld = y;}
	//			else  { xOld = xOld; yOld = y; }
				addlin(x, y, x, yOld, PrizCol, scene);
			//	xOld = xOld; yOld = y;
			}*/
			
	//	}
		h++;
	}
	 }
	 stl.clear(); 
	 xOld = x; yOld = y;
     ++i;
	 
	}
/*******************/

QMap<StuctTz *,int>::const_iterator p = mapTz.constBegin();
	while (p != mapTz.constEnd()) 
		{
		StuctTz* pStuct1l;
		pStuct1l = p.key();
		dd = pStuct1l->Name;
		PrizCol = pStuct1l->Cpr;
		x = pStuct1l->X;
		y = pStuct1l->Y;
//		xOld = pStuct1l->xOld;
//		yOld = pStuct1l->yOld;
		addCircle(x, y,PrizCol, scene);
		addName(x, y, dd, scene);
	/*	paint(scene,  x,  y);*/

//		addlin(x, y, xOld, yOld, PrizCol, scene);
		p++;
	}
//	addCircle(x, y,0, scene);
  //  view.show();

	/*&&&&&&&&&&&&&&&&&&&&&&&&&*/
	QMap<StuctTz *, int>::const_iterator itz = mapTz.constBegin();
	while (itz != mapTz.constEnd()) 
		{
				StuctTz* pStuctTabl;
				pStuctTabl = itz.key();
				St = pStuctTabl->Name;
				++itz;

	}




	int cC = 0; xOld = 10; yOld = 0; W.clear(); list.clear();
		QMap<QString, int>::const_iterator ia = mapA.constBegin();
		while (ia != mapA.constEnd()) 
		{
			W.insert( 0,(ia.key())); 
			int SizA = ia.key().size();
			for (int cC = 0; cC < SizA; ++cC)
			{
				Gt = W.at(cC); 
				QMapIterator<StuctTz *, int> itz(mapTz);
				while (itz.hasNext()) {
					itz.next();
					StuctTz* pStuctTabl;
					pStuctTabl = itz.key();
					St = pStuctTabl->Name;
					StN = itz.value();
					if (cC == StN)	{
						if ( Gt == St) {
							list << pStuctTabl->X << pStuctTabl->Y;
						}	//else 
							//itz.next();
					}
				}
			}
	//		  } while (Ypr == 0);
			
//				pStuctTabl = itz.key();
//				x = pStuctTabl->X; y = pStuctTabl->Y;
//				addlin(x, y, xOld, yOld, PrizCol, scene);
//				xOld = x; yOld = y;
//			}
//			}
			for (int i = 0; (i + 3) < list.size(); i = i +2) 
			{
				xOld = list.at(i); yOld = list.at(i+1);
				x = list.at(i+2); y = list.at(i+3);
//		polygon << QPoint (x, y) << QPoint(x-4, y+4) << QPoint (x, y-4);
				addlin(x, y, xOld, yOld, 5, scene);
			} 
			W.clear(); list.clear();
			ia++;  
		}
		
//		addlin(x, y, xOld, yOld, PrizCol, scene);
/*&&&&&&&&&&&&&&&&&&&&&&&&&*/
}

QRectF grafic::boundingRect() const
{
    return QRectF(-15.5, -15.5, 34, 34);
	 
}

void grafic::addCircle(const int ix, const int iy, const int Priz, QGraphicsScene *scene)

{
	int a =0;	int b =0;	int c =0;
	QString AD = "A";
	if (Priz == 0 ) {a =0;	b =255;	c =0;}
	if (Priz == 1 ) {a =198; b =115; c =204;}
	if (Priz == 2 ) {a =225; b =30;	c =30;}
	if (Priz == 3 ) {a =30;	 b =30;	c =225;}
	if (Priz == 4 ) {a =225; b =225; c =225;}
	if (Priz == 5 ) {a =0;	 b =0;	c =0;}
	QAbstractGraphicsShapeItem* i3 = scene->addEllipse(QRectF(0,0,28,28));
	QAbstractGraphicsShapeItem* i = scene->addEllipse(QRectF(0,0,27,27));
	QAbstractGraphicsShapeItem* i2 = scene->addEllipse(QRectF(0,0,28,28), Qt::SolidLine);
 
	i3->setPen(Qt::NoPen);
    i3->setBrush(Qt::gray);
    i3->setPos( ix+4, iy+5); 

   	i2->setBrush( QColor(255,255,255,0));   
	i2->setPen( QPen(QColor(0,0,0), 1.7) );//qrand()%32*8,qrand()%32*8,qrand()%32*8) );
    i2->setPos( ix-1, iy);

	i->setFlag(QGraphicsItem::ItemIsMovable);
	i->setPen(Qt::NoPen);
    i->setBrush( QColor(a,b,c,255));                       
    i->setPos( ix, iy+1); 
	i->setFocus ( Qt::MouseFocusReason );
	
    QRadialGradient gradient(-10, -10, 27);
	gradient.setCenter(10, 10);
    gradient.setFocalPoint(10, 10);
	gradient.setFocalPoint(10, 10);
    gradient.setColorAt(0, QColor(a,b,c,255).light(200));
    gradient.setColorAt(0.5, QColor(a,b,c,255).light(100));
    gradient.setColorAt(1, QColor(a,b,c,255).light(10)); 

    i->setBrush(gradient);
	i->setEnabled(false);

//    i->setZValue(qrand()%256);
}

void grafic::addName(const int ix, const int iy, QString Name_, QGraphicsScene *scene)
{
	QString Num; 
	
	QGraphicsTextItem* e = scene->addText(Name_);
	QFont font( "helvetica", 14 );
    e->setFont( font );
	e->setAcceptedMouseButtons(Qt::NoButton);
	e->setAcceptHoverEvents (false);
    e->setFlag(QGraphicsItem::ItemIsMovable, false);
    e->setPos(ix+2, iy-2);
	stl << "a" << "b" << "g";
	QString str = stl.join(",");
	e->setToolTip(str);

//	e->setVisible(false);	
	e->setEnabled(false);
	

	Num = QString::number((ix-10)/50,10);
	QGraphicsTextItem* e1 = scene->addText(Num);
	QFont fon( "helvetica", 15 );
    e1->setFont( fon );
    e1->setFlag(QGraphicsItem::ItemIsMovable);
    e1->setPos(ix+5,  150);
	e1->setEnabled(false);
//   e->setZValue(qrand()%256);

//	paint(scene,  ix,  iy);
}

void grafic::addlin(const int ix, const int iy, const int ixOld, const int iyOld, const int PrizCol, QGraphicsScene *scene)
{
	QPen pen(Qt::black, 3, Qt::DashDotLine, Qt::RoundCap, Qt::RoundJoin);
	
	int a =0;	int b =0;	int c =0;  int q = 0; int z = 0;
	if (PrizCol == 0 ) {a =0;	b =255;	c =0;}
	if (PrizCol == 1 ) {a =198; b =115; c =204;}
	if (PrizCol == 2 ) {a =225; b =30;	c =30;}
	if (PrizCol == 3 ) {a =30;	 b =30;	c =225;}
	if (PrizCol == 4 ) {a =225;	 b =225;	c =225;}
	QGraphicsLineItem* f = scene->addLine( ix, iy+12, xOld+27, yOld+12, pen);
//	QGraphicsLineItem* f1 = scene->addLine(QLineF( ix, iy+12, ix-6, iy+9));
//	QPolygonF polygon;
//	polygon << QPoint (ix, iy) << QPoint(ix-4, iy+4) << QPoint (ix-4, iy-4);
//	polygon.clear();
//	q = ix; z = iy+12;
	//polygon << QPoint (ix, iy) << QPoint(ix-4, iy+4) << QPoint (ix-4, iy-4);
//	QGraphicsPolygonItem *p;
//	polygon << QPoint(q-6, z+3) << QPoint (q, z) << QPoint (q-6, z-3) ;
//	p = scene->addPolygon(polygon, QPen(Qt::black, 0 ));
//	if (iy == 0) {	
//		polygon << QPoint(q-6, z+3) << QPoint (q, z) << QPoint (q-6, z-3) ;
//		p = scene->addPolygon(polygon, QPen(Qt::black, 0 ));
//		p->rotate(0);
	//	p->setPen( QPen(Qt::black, 2) );
//	}
//	 if (iy ==30) {
//		 q = ix; z = iyOld+12;
//		polygon << QPoint(q-6, z+3) << QPoint (q, z) << QPoint (q-6, z-3) ;
//		p = scene->addPolygon(polygon, QPen(Qt::black, 0 ));
//		p->translate(ix+48, 100); 
//		p->rotate(-40);
	//	p->scale(q, z);
	//	p->setPen( QPen(Qt::black, 1) );
	//	p->rotate(0);
//	}
//	p = scene->addPolygon(polygon, QPen(Qt::black, 0 ));//Qt::DashDotLine, Qt::RoundCap, Qt::RoundJoin));                         //QPen(QColor(0,0,0), 0)); 

//	if (iy == -30) 	p->rotate( 25 );

	//	QLineF linef;
//	linef.normalVector();
//	f->setLine(ix, iy+12, xOld+25, yOld+14);
//	f = scene->addLine(linef);
	//QGraphicsLineItem* f = scene->addLine(QLineF( qrand()%int(scene->width()), qrand()%int(scene->height()),
    //                                              qrand()%int(scene->width()), qrand()%int(scene->height()) ));
    f->setFlag(QGraphicsItem::ItemIsMovable);
//	f->setPen(QPen (Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
//	f1->setPen( QPen(QColor(a,b,c), 1.5) );
//	f->setPen( QPen(QColor(255,255,255), 2) );
	f->setPen( QPen(QColor(Qt::black), 2) );
	
//	paint(scene,  ix,  iy, ixOld, iyOld, PrizCol, f);
	
    f->setZValue(qrand()%256);
	f->setEnabled(false);
	paint(scene,  ix, iy);

//	polygon << QPoint (0,0) << QPoint(4, 4) << QPoint (4, -4);
//	polygon << QPoint (ixOld, iyOld+8) << QPoint(ix, iy) << QPoint (ixOld, iyOld-8);
//	p->setPen( QPen(QColor(Qt::black), 2) );
}

void grafic::paint( QGraphicsScene *scene, const int ix, const int iy ) //, const int ixOld, const int iyOld, const int PrizCol )
{
	int q = 0; int z = 0;
	QGraphicsPolygonItem *p;
//	QPolygonF polygon;
	if (iy == 0) 
	{
		polygon.clear();
		polygon << QPoint(ix-5, 8) << QPoint (ix-1, 12) << QPoint (ix-5, 16) ;
		p = scene->addPolygon(polygon, QPen(Qt::black, 2 ));
	}
	if (iy == 30) 
	 {
		polygon.clear();
		polygon << QPoint(ix-8, iy+7 ) << QPoint (ix-1, iy+12) << QPoint (ix-3, iy+1) ;
		p = scene->addPolygon(polygon, QPen(Qt::black, 2 ));
	}
	 if (iy == -30) 
	 {
		polygon.clear();
		polygon << QPoint(ix-8, iy +17 ) << QPoint (ix-1, iy+13) << QPoint (ix-3, iy +23) ;
		p = scene->addPolygon(polygon, QPen(Qt::black, 2 ));
	}
	 if (iy == 60) 
	 {
		polygon.clear();
		polygon << QPoint(ix-6, iy+9 ) << QPoint (ix-2, iy+14) << QPoint (ix-1, iy+1) ;
		p = scene->addPolygon(polygon, QPen(Qt::black, 2 ));
	}
	 if (iy == -60) 
	 {
		polygon.clear();
		polygon << QPoint(ix-6, iy +19 ) << QPoint (ix-2, iy+15) << QPoint (ix+1, iy +24) ;
		p = scene->addPolygon(polygon, QPen(Qt::black, 2 ));
	}
//		 q = ix; z = iyOld+12;
////		polygon << QPoint(q-6, z+3) << QPoint (q, z) << QPoint (q-6, z-3) ;
/////		p = scene->addPolygon(polygon, QPen(Qt::black, 0 ));
//		p->translate(q, z); 
////		p->rotate(-40);
	//	p->scale(q, z);
////		p->setPen( QPen(Qt::black, 1) );
	//	p->rotate(0);
//		polygon.clear();
/*	}
	 if (iy == 30) {
		p->translate(ix-5, 30+8);
		p->rotate(30.0);
		p = scene->addPolygon(polygon, QPen(Qt::black, 2 ));

	 }

	  if (iy == -60) {
		p->translate(ix-5, -60+21);
		p->rotate(-60.0);
		p = scene->addPolygon(polygon, QPen(Qt::black, 2 ));
	  }

	  if (iy == 60) {
		p->translate(ix-4, 60+6);
		p->rotate(60.0);
		p = scene->addPolygon(polygon, QPen(Qt::black, 2 ));

	 }

//	QGraphicsPolygonItem *p = scene->addPolygon(polygon);
//	QColor color(ColR, ColG, ColB);
//	ColR = 92;  ColG = 162;  ColB = 30;
//	Q_UNUSED(option);
//    Q_UNUSED(widget);
 /*   painter->setPen(Qt::NoPen);
    painter->setBrush(Qt::darkGray);
    painter->drawEllipse(-12, -12, 30, 30);
    painter->setPen(QPen(Qt::black, 1));
    painter->setBrush(QBrush(color));
    painter->drawEllipse(-15, -15, 30, 30);*/
//////	QPainter painter(this); 
//	QPoint p1(ixOld, iyOld);
//	QPoint p2(ix, iy);
 //   QLineF line(p2, p1);
//	QLineF line(p2, p1);
	//if (qFuzzyCompare(line.length(), qreal(0.)))
  ////      return;
	//vec.    = mapToItem(_f, qreal(0.), qreal(0.));
      ////  qreal dx = 50;
     ////   qreal dy = 1;
   // if (qFuzzyCompare(line.length(), qreal(0.)))
   //     return;
//! [4]

//! [5]
    // Draw the line itself
//    painter->setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
//	QPainter(this);
 //   painter.drawLine(line);
//! [5]

//! [6]
    // Draw the arrows
	/////double  angle;
  //  double angle = ::acos(line.dx() / line.length());
   // if (line.dy() >= 0)
  //  angle = TwoPi - 2;
//	sourcePoint = destPoint = line.p1();

  //  QPointF sourceArrowP1 = sourcePoint + QPointF(sin(angle + Pi / 3) * arrowSize,
                                         //         cos(angle + Pi / 3) * arrowSize);
  //  QPointF sourceArrowP2 = sourcePoint + QPointF(sin(angle + Pi - Pi / 3) * arrowSize,
                                             //     cos(angle + Pi - Pi / 3) * arrowSize);   
  //  QPointF destArrowP1 = destPoint + QPointF(sin(angle - Pi / 3) * arrowSize,
                                            //  cos(angle - Pi / 3) * arrowSize);
  //  QPointF destArrowP2 = destPoint + QPointF(sin(angle - Pi + Pi / 3) * arrowSize,
                                            //  cos(angle - Pi + Pi / 3) * arrowSize);

  /////  painter.setBrush(Qt::black);
//	polygon << QPoint (ixOld, iyOld+3) << QPoint(ix, iy) << QPoint (ixOld, iyOld-3);
//	p->setPen( QPen(QColor(0,0,0), 2) );
//	polygon << line.p1() << line.p2() << line.p1();
//	p->setPolygon(polygon);
//	polygon << line.p2() << destArrowP1 << destArrowP2;
//	p->setPolygon(polygon);
 //   painter.drawPolygon(polygon);
 //   painter.drawPolygon(QPolygonF() << line.p2() << destArrowP1 << destArrowP2);

//QGraphicsLineItem* f = scene->addLine( ix, iy+12, xOld+27, yOld+12, pen);
//QGraphicsRectItem* r = scene->rect();//setRect( QRectF(0, -90, 2000, 200) );

//QRectF *r;  scene->seneRect ();






}
void grafic::AmCol()
{
	QString aBuf; 
	int Apriz;
	int numAc = 0;
	Apriz = Amin.size();
	for (int i = 0; i < Amin.size() ; ++i)
	{
		StuctT *recordTab= new StuctT;
		recordTab = new StuctT;
		StuctT *pTabItem = recordTab;
		pTabItem->kodAm = Amin.at(i);  
		if (i < 9)
			{
				pTabItem->Cpriz = 0;
			}
			if (i >= 9 && i < 15)
			{
				pTabItem->Cpriz = 1;
			}
			if (i >= 15 && i < 17)
			{
				pTabItem->Cpriz = 2;
			}
			if (i >= 17 && i < 20)
			{
				pTabItem->Cpriz = 3;
			}
			if (i >= 20 && i < 21)
			{
				pTabItem->Cpriz = 4;
			}
			
			mapAC.insert(numAc, pTabItem); 
			++numAc;	

	}

}
void grafic::mousePressEvent(QGraphicsSceneMouseEvent *event, QGraphicsScene *scene)
{
	QGraphicsTextItem* e = scene->addText("jjjj");
	e->setPos(100, 10);
    addName(100, 10, "YYY", scene);
	
	mousePressEvent(event, scene);
} 



//    setCursor(Qt::ClosedHandCursor);




