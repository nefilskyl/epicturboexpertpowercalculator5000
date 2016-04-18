/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *action_README;
    QAction *action_About;
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Button_mul;
    QPushButton *Button_div;
    QPushButton *Button_minus;
    QPushButton *Button_7;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QPushButton *Button_plus;
    QPushButton *Button_4;
    QPushButton *Button_5;
    QPushButton *Button_6;
    QPushButton *Button_1;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QPushButton *Button_result;
    QPushButton *Button_0;
    QPushButton *Button_DPoint;
    QPushButton *Button_plusminus;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *Button_power;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(223, 295);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(223, 295));
        MainWindow->setMaximumSize(QSize(223, 295));
        MainWindow->setMouseTracking(false);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setIconSize(QSize(25, 25));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionQuit->setMenuRole(QAction::QuitRole);
        action_README = new QAction(MainWindow);
        action_README->setObjectName(QString::fromUtf8("action_README"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 208, 40));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(208, 40));
        lineEdit->setMaximumSize(QSize(208, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("WenQuanYi Micro Hei Mono"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        lineEdit->setFont(font);
        lineEdit->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit->setFocusPolicy(Qt::NoFocus);
        lineEdit->setContextMenuPolicy(Qt::NoContextMenu);
        lineEdit->setText(QString::fromUtf8("0"));
        lineEdit->setMaxLength(20);
        lineEdit->setFrame(true);
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit->setCursorPosition(1);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setDragEnabled(false);
        lineEdit->setReadOnly(true);
        lineEdit->setPlaceholderText(QString::fromUtf8("42"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 161, 181));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Button_mul = new QPushButton(layoutWidget);
        Button_mul->setObjectName(QString::fromUtf8("Button_mul"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button_mul->sizePolicy().hasHeightForWidth());
        Button_mul->setSizePolicy(sizePolicy1);
        Button_mul->setMinimumSize(QSize(30, 30));
        Button_mul->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_mul, 0, 1, 1, 1);

        Button_div = new QPushButton(layoutWidget);
        Button_div->setObjectName(QString::fromUtf8("Button_div"));
        sizePolicy1.setHeightForWidth(Button_div->sizePolicy().hasHeightForWidth());
        Button_div->setSizePolicy(sizePolicy1);
        Button_div->setMinimumSize(QSize(30, 30));
        Button_div->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_div, 0, 2, 1, 1);

        Button_minus = new QPushButton(layoutWidget);
        Button_minus->setObjectName(QString::fromUtf8("Button_minus"));
        sizePolicy1.setHeightForWidth(Button_minus->sizePolicy().hasHeightForWidth());
        Button_minus->setSizePolicy(sizePolicy1);
        Button_minus->setMinimumSize(QSize(30, 30));
        Button_minus->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_minus, 0, 3, 1, 1);

        Button_7 = new QPushButton(layoutWidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        sizePolicy1.setHeightForWidth(Button_7->sizePolicy().hasHeightForWidth());
        Button_7->setSizePolicy(sizePolicy1);
        Button_7->setMinimumSize(QSize(30, 30));
        Button_7->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_7, 1, 0, 1, 1);

        Button_8 = new QPushButton(layoutWidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        sizePolicy1.setHeightForWidth(Button_8->sizePolicy().hasHeightForWidth());
        Button_8->setSizePolicy(sizePolicy1);
        Button_8->setMinimumSize(QSize(30, 30));
        Button_8->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_8, 1, 1, 1, 1);

        Button_9 = new QPushButton(layoutWidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        sizePolicy1.setHeightForWidth(Button_9->sizePolicy().hasHeightForWidth());
        Button_9->setSizePolicy(sizePolicy1);
        Button_9->setMinimumSize(QSize(30, 30));
        Button_9->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_9, 1, 2, 1, 1);

        Button_plus = new QPushButton(layoutWidget);
        Button_plus->setObjectName(QString::fromUtf8("Button_plus"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(30);
        sizePolicy2.setVerticalStretch(65);
        sizePolicy2.setHeightForWidth(Button_plus->sizePolicy().hasHeightForWidth());
        Button_plus->setSizePolicy(sizePolicy2);
        Button_plus->setMinimumSize(QSize(30, 65));
        Button_plus->setMaximumSize(QSize(30, 65));

        gridLayout->addWidget(Button_plus, 1, 3, 2, 1);

        Button_4 = new QPushButton(layoutWidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        sizePolicy1.setHeightForWidth(Button_4->sizePolicy().hasHeightForWidth());
        Button_4->setSizePolicy(sizePolicy1);
        Button_4->setMinimumSize(QSize(30, 30));
        Button_4->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_4, 2, 0, 1, 1);

        Button_5 = new QPushButton(layoutWidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        sizePolicy1.setHeightForWidth(Button_5->sizePolicy().hasHeightForWidth());
        Button_5->setSizePolicy(sizePolicy1);
        Button_5->setMinimumSize(QSize(30, 30));
        Button_5->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_5, 2, 1, 1, 1);

        Button_6 = new QPushButton(layoutWidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        sizePolicy1.setHeightForWidth(Button_6->sizePolicy().hasHeightForWidth());
        Button_6->setSizePolicy(sizePolicy1);
        Button_6->setMinimumSize(QSize(30, 30));
        Button_6->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_6, 2, 2, 1, 1);

        Button_1 = new QPushButton(layoutWidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        sizePolicy1.setHeightForWidth(Button_1->sizePolicy().hasHeightForWidth());
        Button_1->setSizePolicy(sizePolicy1);
        Button_1->setMinimumSize(QSize(30, 30));
        Button_1->setMaximumSize(QSize(30, 30));
        Button_1->setAutoFillBackground(false);
        Button_1->setInputMethodHints(Qt::ImhNone);
        Button_1->setCheckable(false);
        Button_1->setAutoDefault(false);
        Button_1->setDefault(false);
        Button_1->setFlat(false);

        gridLayout->addWidget(Button_1, 3, 0, 1, 1);

        Button_2 = new QPushButton(layoutWidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        sizePolicy1.setHeightForWidth(Button_2->sizePolicy().hasHeightForWidth());
        Button_2->setSizePolicy(sizePolicy1);
        Button_2->setMinimumSize(QSize(30, 30));
        Button_2->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_2, 3, 1, 1, 1);

        Button_3 = new QPushButton(layoutWidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        sizePolicy1.setHeightForWidth(Button_3->sizePolicy().hasHeightForWidth());
        Button_3->setSizePolicy(sizePolicy1);
        Button_3->setMinimumSize(QSize(30, 30));
        Button_3->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_3, 3, 2, 1, 1);

        Button_result = new QPushButton(layoutWidget);
        Button_result->setObjectName(QString::fromUtf8("Button_result"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(30);
        sizePolicy3.setVerticalStretch(60);
        sizePolicy3.setHeightForWidth(Button_result->sizePolicy().hasHeightForWidth());
        Button_result->setSizePolicy(sizePolicy3);
        Button_result->setMinimumSize(QSize(30, 65));
        Button_result->setMaximumSize(QSize(30, 65));

        gridLayout->addWidget(Button_result, 3, 3, 2, 1);

        Button_0 = new QPushButton(layoutWidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        sizePolicy1.setHeightForWidth(Button_0->sizePolicy().hasHeightForWidth());
        Button_0->setSizePolicy(sizePolicy1);
        Button_0->setMinimumSize(QSize(70, 30));
        Button_0->setMaximumSize(QSize(75, 30));

        gridLayout->addWidget(Button_0, 4, 0, 1, 2);

        Button_DPoint = new QPushButton(layoutWidget);
        Button_DPoint->setObjectName(QString::fromUtf8("Button_DPoint"));
        sizePolicy1.setHeightForWidth(Button_DPoint->sizePolicy().hasHeightForWidth());
        Button_DPoint->setSizePolicy(sizePolicy1);
        Button_DPoint->setMinimumSize(QSize(30, 30));
        Button_DPoint->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_DPoint, 4, 2, 1, 1);

        Button_plusminus = new QPushButton(layoutWidget);
        Button_plusminus->setObjectName(QString::fromUtf8("Button_plusminus"));
        Button_plusminus->setMinimumSize(QSize(30, 30));
        Button_plusminus->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(Button_plusminus, 0, 0, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(180, 70, 32, 181));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(30, 30));
        pushButton_4->setMaximumSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(30, 30));
        pushButton_2->setMaximumSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(30, 30));
        pushButton->setMaximumSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton);

        Button_power = new QPushButton(layoutWidget1);
        Button_power->setObjectName(QString::fromUtf8("Button_power"));
        sizePolicy1.setHeightForWidth(Button_power->sizePolicy().hasHeightForWidth());
        Button_power->setSizePolicy(sizePolicy1);
        Button_power->setMinimumSize(QSize(30, 30));
        Button_power->setMaximumSize(QSize(30, 30));
        Button_power->setText(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("xn_button.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_power->setIcon(icon1);
        Button_power->setIconSize(QSize(18, 18));

        verticalLayout->addWidget(Button_power);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(30, 30));
        pushButton_3->setMaximumSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 223, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(action_README);
        menuFile->addAction(action_About);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ETEPC-5000", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        MainWindow->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Q", 0, QApplication::UnicodeUTF8));
        action_README->setText(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        action_About->setText(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
        Button_mul->setText(QApplication::translate("MainWindow", "\303\227", 0, QApplication::UnicodeUTF8));
        Button_mul->setShortcut(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        Button_div->setText(QApplication::translate("MainWindow", "\303\267", 0, QApplication::UnicodeUTF8));
        Button_div->setShortcut(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        Button_minus->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        Button_minus->setShortcut(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        Button_7->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        Button_7->setShortcut(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        Button_8->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        Button_8->setShortcut(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        Button_9->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        Button_9->setShortcut(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        Button_plus->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        Button_plus->setShortcut(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        Button_4->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        Button_4->setShortcut(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        Button_5->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        Button_5->setShortcut(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        Button_6->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        Button_6->setShortcut(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        Button_1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        Button_1->setShortcut(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        Button_2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        Button_2->setShortcut(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        Button_3->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        Button_3->setShortcut(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        Button_result->setText(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        Button_result->setShortcut(QApplication::translate("MainWindow", "Return", 0, QApplication::UnicodeUTF8));
        Button_0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        Button_0->setShortcut(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        Button_DPoint->setText(QApplication::translate("MainWindow", ",", 0, QApplication::UnicodeUTF8));
        Button_DPoint->setShortcut(QApplication::translate("MainWindow", ",", 0, QApplication::UnicodeUTF8));
        Button_plusminus->setText(QApplication::translate("MainWindow", "+/-", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        pushButton_4->setShortcut(QApplication::translate("MainWindow", "Backspace", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "n!", 0, QApplication::UnicodeUTF8));
        pushButton_2->setShortcut(QApplication::translate("MainWindow", "!", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "ln", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Ans", 0, QApplication::UnicodeUTF8));
        pushButton_3->setShortcut(QApplication::translate("MainWindow", "Space", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
