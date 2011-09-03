/**
 * @copyright Copyright (C) 2011 Synap System SARL. Tous droits réservés.
 * @license http://www.gnu.org/licenses/gpl.html GNU General Public License
 * @author Charles-Edouard Coste <cc@synap.fr>
 */
#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
