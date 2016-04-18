#include "ui_main.h" // hlavickovy soubor popisujici (graficke) uzivatelske rozhrani


int main(int argc, char *argv[]){

  QApplication app(argc, argv); // QApplication - Qt trida, app jeji instance (=konkretni objekt), vzdy (asi) se ji pri volani predavaji argv, argc (tj. vlastne inicializace toho objektu app) 
  QMainWindow *window = new QMainWindow; // window je ukazatel na instanci tridy QMainWindow... new je zase inicializace noveho objektu 
  Ui::MainWindow ui; // Ui a MainWindow - viz ui_main.h, :: -> je clenem, ui je objekt tridy MainWindow
  ui.setupUi(window); // volani metody setupUi() tridy Ui_MainWindow -> nastaveni ui, jako parametr prebira ukazatel na QMainWindow... 
    // ui je nase rozhrani, ktere popisuje jednotlive komponenty (tlacitka, displej, ..., okno)
    // window je instance (prazdneho) okna
    // metoda setupUi() sestavuje nase rozhrani (vytvari a nastavuje tlacitka jakozto objekty,... a nastavuje okno) [resp. vklada tlacitka apod. (=widgety) do okna-window]
    // ___________

    



  
  window->show(); // zobrazeni okna
  
  return app.exec(); // nekonecna smycka zajistujici interakci.. program <-> ui <-> uzivatel... {uzivatel zada akci, vyhodnoceni akce} porad dokola... pokud akce nebyla Quit 
}
