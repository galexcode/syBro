/**
 * @copyright Copyright (C) 2011 Synap System SARL. Tous droits réservés.
 * @license http://www.gnu.org/licenses/gpl.html GNU General Public License
 * @author Charles-Edouard Coste <cc@synap.fr>
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUrl>
#include <QLineEdit>
#include <QString>
#include <QProgressBar>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void load();

private:
    Ui::MainWindow *ui;
    QLineEdit *url;
};

#endif // MAINWINDOW_H
