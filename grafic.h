#ifndef GRAFIC_H
#define GRAFIC_H

#include <QtGui/QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QPointF>
#include "gr1.h"
//#include <ui_grafic.h>
class QMouseEvent;
class StuctT   
{
public:
  StuctT(){};
  ~StuctT();
  QString kodAm;	// имя (буквенное обозначение)
  int Cpriz;		// индекс цвета
 };

class StuctGr   
{
public:
  StuctGr(){};
  ~StuctGr();
  QString NaAm;	    // имя 
  int Cpr;		// индекс цвета
  int Xx;		   // текущая коорд.
  int Yy;		   // --- // ---
  int xOld;		   // предыдущ. коорд.
  int yOld;		   // --- // ---
  QString  OldAm;  // ????
 };

class StuctTz   
{
public:
  StuctTz(){};
  ~StuctTz();
  QString Name;		// имя 
  int Cpr;			// индекс цвета
  int X;			// текущая коорд.
  int Y;			// --- // ---
  int Siz;			// кол. в связке mapST
 };


class grafic :public QGraphicsView
{
    Q_OBJECT
public:
    grafic();
//	~grafic();
    QRectF boundingRect() const;
	void addCircle(const int ix, const int iy, const int Priz, QGraphicsScene *scene);
	void addName(const int ix, const int iy, QString Name_, QGraphicsScene *scene);
	void addlin(const int ix, const int iy, const int ixOld, const int iyOld, const int Priz, QGraphicsScene *scene);
	void graficInit(QGraphicsScene *scene, QMap<int, QStringList>, QMap<QString, int>);
	
	void mousePressEvent(QGraphicsSceneMouseEvent *event, QGraphicsScene *scene);
	
	QMap<int, StuctT *> mapAC;    //Список соответствия амин.к. и цвета
	QMap<int, StuctGr *> mapGr;
	QMap<StuctTz *, int> mapTz;
//	QMap<int, QStringList> mapST;
	QStringList stl;
	int xOld, yOld;
    void paint(QGraphicsScene *scene, const int ix, const int iy ); //, const int ixOld, const int iyOld, const int PrizCol );
	void AmCol();
	
protected:
//	void mousePressEvent(QMouseEvent *event, QGraphicsScene *scene);
// void mousePressEvent(QGraphicsSceneMouseEvent *event);
private:
	QColor color;
	QPolygonF polygon;
	QPainter *painter;
	
};

#endif
