/********************************************************************************
** Form generated from reading UI file 'gr1.ui'
**
** Created: Mon 10. Dec 12:03:37 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GR1_H
#define UI_GR1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gr1Class
{
public:
    QAction *actionLo;
    QAction *actionIu;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lEd;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QTableWidget *tableWidget_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_7;
    QTableWidget *tableWidget_3;
    QWidget *tab_4;
    QGridLayout *gridLayout_8;
    QTableWidget *tableWidget_4;
    QWidget *tab_5;
    QGridLayout *gridLayout_6;
    QTableWidget *tableWidget_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pBut1;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pBEx;
    QSpacerItem *horizontalSpacer_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Gr1Class)
    {
        if (Gr1Class->objectName().isEmpty())
            Gr1Class->setObjectName(QString::fromUtf8("Gr1Class"));
        Gr1Class->resize(611, 451);
        actionLo = new QAction(Gr1Class);
        actionLo->setObjectName(QString::fromUtf8("actionLo"));
        actionIu = new QAction(Gr1Class);
        actionIu->setObjectName(QString::fromUtf8("actionIu"));
        centralWidget = new QWidget(Gr1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(250, 65));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(50);
        font.setKerning(false);
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(200, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lEd = new QLineEdit(frame);
        lEd->setObjectName(QString::fromUtf8("lEd"));
        lEd->setMinimumSize(QSize(190, 25));

        horizontalLayout_2->addWidget(lEd);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        tabWidget->setFont(font1);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        if (tableWidget->rowCount() < 102)
            tableWidget->setRowCount(102);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        tableWidget->setFont(font2);
        tableWidget->setLineWidth(3);
        tableWidget->setRowCount(102);
        tableWidget->setColumnCount(7);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);

        gridLayout_4->addWidget(tableWidget, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->columnCount() < 7)
            tableWidget_2->setColumnCount(7);
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font3);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font3);
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font3);
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font3);
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font3);
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font3);
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font3);
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem7);
        if (tableWidget_2->rowCount() < 20)
            tableWidget_2->setRowCount(20);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setFont(font2);
        tableWidget_2->setRowCount(20);
        tableWidget_2->setColumnCount(7);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(false);

        gridLayout_5->addWidget(tableWidget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_7 = new QGridLayout(tab_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        tableWidget_3 = new QTableWidget(tab_3);
        if (tableWidget_3->columnCount() < 65)
            tableWidget_3->setColumnCount(65);
        if (tableWidget_3->rowCount() < 15)
            tableWidget_3->setRowCount(15);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setFont(font2);
        tableWidget_3->setRowCount(15);
        tableWidget_3->setColumnCount(65);

        gridLayout_7->addWidget(tableWidget_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_8 = new QGridLayout(tab_4);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        tableWidget_4 = new QTableWidget(tab_4);
        if (tableWidget_4->columnCount() < 65)
            tableWidget_4->setColumnCount(65);
        if (tableWidget_4->rowCount() < 1)
            tableWidget_4->setRowCount(1);
        QFont font4;
        font4.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font4);
        tableWidget_4->setItem(0, 0, __qtablewidgetitem8);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));
        tableWidget_4->setFont(font2);
        tableWidget_4->setRowCount(1);
        tableWidget_4->setColumnCount(65);

        gridLayout_8->addWidget(tableWidget_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_6 = new QGridLayout(tab_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tableWidget_5 = new QTableWidget(tab_5);
        if (tableWidget_5->columnCount() < 3)
            tableWidget_5->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font1);
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font1);
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font1);
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        if (tableWidget_5->rowCount() < 20)
            tableWidget_5->setRowCount(20);
        tableWidget_5->setObjectName(QString::fromUtf8("tableWidget_5"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget_5->sizePolicy().hasHeightForWidth());
        tableWidget_5->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(10);
        tableWidget_5->setFont(font5);
        tableWidget_5->setRowCount(20);
        tableWidget_5->setColumnCount(3);

        gridLayout_6->addWidget(tableWidget_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pBut1 = new QPushButton(centralWidget);
        pBut1->setObjectName(QString::fromUtf8("pBut1"));

        horizontalLayout->addWidget(pBut1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pBEx = new QPushButton(centralWidget);
        pBEx->setObjectName(QString::fromUtf8("pBEx"));

        horizontalLayout->addWidget(pBEx);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        Gr1Class->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Gr1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Gr1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Gr1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Gr1Class->setStatusBar(statusBar);

        mainToolBar->addSeparator();

        retranslateUi(Gr1Class);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Gr1Class);
    } // setupUi

    void retranslateUi(QMainWindow *Gr1Class)
    {
        Gr1Class->setWindowTitle(QApplication::translate("Gr1Class", "R R R R R", 0, QApplication::UnicodeUTF8));
        actionLo->setText(QApplication::translate("Gr1Class", "lo", 0, QApplication::UnicodeUTF8));
        actionIu->setText(QApplication::translate("Gr1Class", "iu", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Gr1Class", "FILE", 0, QApplication::UnicodeUTF8));
        lEd->setText(QString());

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Gr1Class", "Table_All", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Gr1Class", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Gr1Class", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Gr1Class", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Gr1Class", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Gr1Class", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Gr1Class", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Gr1Class", "7", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Gr1Class", "Table_Select", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Gr1Class", "Table_Column(\342\204\226)", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = tableWidget_4->isSortingEnabled();
        tableWidget_4->setSortingEnabled(false);
        tableWidget_4->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Gr1Class", "Table_Optim", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("Gr1Class", "Sequences", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("Gr1Class", "Variants", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("Gr1Class", "Number of items", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Gr1Class", "Table_Inform", 0, QApplication::UnicodeUTF8));
        pBut1->setText(QApplication::translate("Gr1Class", "PushButton", 0, QApplication::UnicodeUTF8));
        pBEx->setText(QApplication::translate("Gr1Class", "EXIT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Gr1Class: public Ui_Gr1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GR1_H
