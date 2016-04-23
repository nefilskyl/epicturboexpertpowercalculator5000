#include "mainwindow.h"
#include <QApplication>
#include <QMenuBar>
#include <QToolBar>
#include <QAction>
#include <QFileDialog>
#include <QDir>
#include <QFileInfo>
#include <QMessageBox>
#include <QListWidget>

MainWindow::MainWindow() : m_dir(0)
{
	// vytvoříme panel s nabídkou
	QMenuBar* menuBar = new QMenuBar(this);
	// jednotlivá menu
	QMenu* menuFile = new QMenu(tr("&File"));
	QMenu* menuHelp = new QMenu(tr("&Help"));
	// položky menu
	QAction* actionOpen = new QAction(tr("&Open"), this);
	QAction* actionQuit = new QAction(tr("&Quit"), this);
	QAction* actionAboutQt = new QAction(tr("About Qt"), this);

	// nastavení klávesové zkratky
	actionOpen->setShortcut(QKeySequence("Ctrl+O"));

	// propojení položek menu s funkcemi programu
	connect(actionOpen, SIGNAL(triggered()), this, SLOT(openDir()));
	connect(actionQuit, SIGNAL(triggered()), qApp, SLOT(quit()));
	connect(actionAboutQt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));

	// přidáme položky do patřičných nabídek...
	menuFile->addAction(actionOpen);
	menuFile->addAction(actionQuit);
	menuHelp->addAction(actionAboutQt);
	//... a jednotlivá menu do panelu
	menuBar->addMenu(menuFile);
	menuBar->addMenu(menuHelp);

	// řekneme widgetu, aby použil naše menu
	setMenuBar(menuBar);

	// vytvoříme grafický seznam položek
	m_list = new QListWidget(this);
	// a nastavíme jej jako hlavní widget hlavního okna
	setCentralWidget(m_list);

	// dvojklik na seznam spustí náš slot
	connect(m_list, SIGNAL(itemDoubleClicked(QListWidgetItem*)),
		this, SLOT(itemDoubleClicked(QListWidgetItem*)));

	resize(600, 400);
}

void MainWindow::itemDoubleClicked(QListWidgetItem* item)
{
	// tato třída poskytuje informace o souborech a adresářích
	QFileInfo fileInfo(m_dName + "/" + item->text());

	if(fileInfo.isDir())
		openDir(fileInfo.canonicalFilePath());
	else
	{
		// dialogy dovedou pracovat s jednoduchým HTML
		QString infotext = "<b>Name</b>: " + fileInfo.fileName()
			 + "<br/><b>Location</b>: " + fileInfo.canonicalPath()
			 + "<br/><b>Owner</b>: " + fileInfo.owner()
			 + "<br/><b>Group</b>: " + fileInfo.group();
		QMessageBox::information(this, tr("File info"), infotext);
	}
}

void MainWindow::openDir(QString dName)
{
	if(!dName.isEmpty())
		m_dName = dName;
	else
		do	// dialog pro výběr existujícího adresáře
			m_dName = QFileDialog::getExistingDirectory(this, tr("Choose a directory"));
		while(m_dName.isEmpty());

	m_dir = new QDir(m_dName);
	// Zde by bylo vhodné kontrolovat přístupová práva,
	// a patřičně na ně reagovat. Takto program nedostatečné
	// oprávnění ignoruje a seznam se vyprázdní.

	// vyprázdníme seznam
	m_list->clear();
	// přidáme položky z adresáře do seznamu
	m_list->addItems(m_dir->entryList(QDir::AllEntries, QDir::Name));

	delete m_dir;
}