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
  QString kodAm;	// ��� (��������� �����������)
  int Cpriz;		// ������ �����
 };

class StuctGr   
{
public:
  StuctGr(){};
  ~StuctGr();
  QString NaAm;	    // ��� 
  int Cpr;		// ������ �����
  int Xx;		   // ������� �����.
  int Yy;		   // --- // ---
  int xOld;		   // ��������. �����.
  int yOld;		   // --- // ---
  QString  OldAm;  // ????
 };

class StuctTz   
{
public:
  StuctTz(){};
  ~StuctTz();
  QString Name;		// ��� 
  int Cpr;			// ������ �����
  int X;			// ������� �����.
  int Y;			// --- // ---
  int Siz;			// ���. � ������ mapST
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
	
	QMap<int, StuctT *> mapAC;    //������ ������������ ����.�. � �����
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
