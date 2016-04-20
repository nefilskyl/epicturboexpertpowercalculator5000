# Epic Turbo Expert Power Calculator 5000
kalkulačka

- překlad souboru test.c probíhá pomocí "gcc test.c -std=c99 -Wall -Wextra -pedantic -o test"

Ad GUI 
- v Qt designeru se nadesignuje kalkulačka, tlačítka a takové blbosti 

- to vyplivne XML soubor (main.ui) 

- to se musí přeložit do hlavičkového souboru   
Máme hlavičkový soubor ui_main.h - hurá! 

Ten obsahuje hlavně popis třídy Ui_MainWindow (to je vlastně grafické rozhraní samo), ve které je spousta ukazatelů na objekty, hlavně tlačítka, line edit (ten displej) a action... všechno je vlastně podmnožina widget (tlačítko, line edit, layout [rozvržení-tohle tlačítko je tady, tohle tam a je to uspořádané v nějaké tabulce], action-nabídka[quit,about]...) a taky dvě metody (setupUi, retranslateUi [ty nemusíme řešit]) 
Třeba QStatusBar stavový řádek si nemusíme vůbec všímat, nepoužíváme ho, jen se prostě generuje automaticky... ani QMenuBar a QMenu netřeba řešit 
Jinak viz dokumentace (např. pro objekt QPushButton http://doc.qt.io/qt-4.8/qpushbutton.html) (a Pavlovy přehledné poznámky  níže) 

- Pavel vyplivl main.cpp (popsán hojně sám)... do něj se naincluduje ui_main.h (a další věci samozřejmě) 

- veškeré změny budou v main.cpp - samotná kalkulačka 
 


_____
 GUI
-----

Popis objektů (widgetů) se kterými budeme pracovat: (práce s nimi viz dokumentace jednotlivých tříd)
- QPushButton
  - Button_[0-9] = cisla
  - Button_DPoint = desettiná čárka (/tečka)
  - Button_[div, mul, plus, minus, power, ln, fact] = tlacitka operací 
  - Button_[result, plusminus, Ans, C] = ostatni tlacitka
- QLineEdit
  - lineEdit = displej
- QAction = akce z nabídky ('File')
  - actionQuit
  - action_About
  - action_Help
  
Klavesove zkratky:
  - [0-9] = cislice
  - [,] = desetinna carka
  - [+], [-], [*], [/], [!] = tlacitka operaci (plus, minus, krat, deleno, faktorial)
  - [return/enter] = výsledek
  - [delete] = tlacitko C
  - [space] = Ans

  - Alt + F = file
    - -> Q = Quit
    - -> A = About
    - -> H = Help



Zprovoznění verze 1.0 "stable":
-------------------------------
  - stáhnout obsah  adresáře (ui_main.h, main.cpp, Makefile, icon.png, xn_button.png)
  - přeložit příkazem make
  - spustit ./Balda


Kompilace ze zdrojáků ("unstable"):
-----------------------------------
  - stáhnout (main.ui, main.cpp, ikonky)
  - příkazem "uic -o ui_main.h main.ui" přeložit user interface (.ui) do hlavickoveho souboru (.h)
  - vygenerovat Qt projekt "qmake -project" (nazev_projektu.pro)
  - vygenerovat Makefile "qmake"
  - přeložit "make" (nazev_projektu, main.o)
  - spustit "./nazev_programu" ... nazev_programu = nazev projektu (= nazev slozky ve ktere je to umísteno)




:::::::::: Obecné věci :::::::::: 

..... K objektům: 

tlačítko je widget, displej je widget... 

každý widget má své signály a sloty

signál je to, co widget vysílá... třeba klikneš na tlačítko a tlačítko pošle signál... ten musí být napojen na nějaký slot, který spustí funkci, která ho zpracuje 
