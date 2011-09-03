/**
 * @copyright Copyright (C) 2011 Synap System SARL. Tous droits réservés.
 * @license http://www.gnu.org/licenses/gpl.html GNU General Public License
 * @author Charles-Edouard Coste <cc@synap.fr>
 */
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->url = new QLineEdit( ui->centralWidget );
    this->url->setPlaceholderText(QString::fromUtf8("Entrez ici l'URL de la page"));

    ui->urlBar->addWidget(this->url);
    QProgressBar *progress = new QProgressBar( ui->centralWidget );
    ui->loadingBar->addWidget(progress);

    connect(this->url, SIGNAL(returnPressed()), this, SLOT(load()));
    connect(ui->webView, SIGNAL(loadStarted()), progress, SLOT(reset()));
    connect(ui->webView, SIGNAL(loadStarted()), ui->loadingBar, SLOT(show()));
    connect(ui->webView, SIGNAL(loadProgress(int)), progress, SLOT(setValue(int)));
    connect(ui->webView, SIGNAL(loadFinished(bool)), ui->loadingBar, SLOT(hide()));
}

void MainWindow::load()
{
    ui->webView->load( QUrl::fromUserInput( this->url->text() ) );
}

MainWindow::~MainWindow()
{
    delete ui;
}
