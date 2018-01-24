#include "widget.h"
#include <QApplication>
#include "QStringListModel"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    w.setWindowTitle("Complex Build");

    QStringList ligandsNames;
    ligandsNames << "Diphenylphosphido"
                 << "Diphenylphosphido"
                 << "N-methylimidazole-N"
                 << "N-methylimidazole-N"
                 << "N-methylimidazole-N"
                 << "N-methylimidazole-N"
                 << "H2O";

    QStringListModel *model = new QStringListModel();
    model->setStringList(ligandsNames);

    //w.setIsomerID("{OC-6 [Ma4b2] D4h [1 2 4 5 6 3] Ba}");
    w.setIsomerID("{PBPY-7 [Ma4b2c] C2v [1 4 2 3 5 7 6] Aa}");

    //w.setPolyedra("OC");
    w.setPolyedra("PBPY");

    w.setLigandList(*model);

    return a.exec();
}
