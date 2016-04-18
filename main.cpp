#include "ui_main.h" // hlavickovy soubor popisujici (graficke) uzivatelske rozhrani


int main(int argc, char *argv[]){

  QApplication app(argc, argv); // QApplication - Qt trida, app jeji instance (=konkretni objekt), vzdy (asi) se ji pri volani predavaji argv, argc
  QMainWindow *window = new QMainWindow; // window je ukazatel na instanci tridy QMainWindow
  Ui::MainWindow ui; // Ui a MainWindow - viz ui_main.h, :: -> je clenem, ui je objekt tridy MainWindow
  ui.setupUi(window); // volani metody setupUi() tridy Ui_MainWindow -> nastaveni ui, jako parametr prebira ukazatel na QMainWindow






  
  window->show(); // zobrazeni okna
  
  return app.exec(); // nekonecna smycka zajistujici interakci.. program <-> ui <-> uzivatel
}
