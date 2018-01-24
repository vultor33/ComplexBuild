#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    //w.setName("fred vultor");

    w.setWindowTitle("Complex Identification");

    w.unsetBidentateMessage();

    /* Print 1
    w.setAtomLabel("N");
    w.setAtomX(" 0.42");
    w.setAtomY("-1.46");
    w.setAtomZ(" 2.12");
    w.setPolyedra(" ");
    w.setIsomerID(" ");
    */

    /* Print 2 */
    w.setAtomLabel(" ");
    w.setAtomX(" ");
    w.setAtomY(" ");
    w.setAtomZ(" ");
    w.setPolyedra("OC");
    w.setIsomerID("{OC-6 [Ma4b2] D4h [1 2 4 5 6 3] Ba}");

    w.show();

    return a.exec();
}
