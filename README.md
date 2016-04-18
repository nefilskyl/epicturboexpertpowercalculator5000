# Epic Turbo Expert Power Calculator 5000
kalkulačka

- překlad souboru test.c probíhá pomocí "gcc test.c -std=c99 -Wall -Wextra -pedantic -o test"

Ad GUI 
- v Qt designeru se nadesignuje kalkulačka, tlačítka a takové blbosti 
- to vyplivne XML soubor (main.ui) 
- to se musí přeložit do hlavičkového souboru 
uic -o ui_main.h main.ui // program_-output_jméno výstupního souboru_jméno vstupního souboru 
Máme hlavičkový soubor ui_main.ui - hurá! 
Ten obsahuje hlavně popis třídy Ui_MainWindow (to je vlastně grafické rozhraní samo), ve které je spousta ukazatelů na objekty a taky dvě metody (setupUi, retranslateUi [ty nemusíme řešit]) 
Viz dokumentace (např. pro objekt QPushButton http://doc.qt.io/qt-4.8/qpushbutton.html) 
- Pavel vyplivl main.cpp a ui_main.h se do něj naincluduje 
- veškeré změny budou v main.cpp - samotná kalkulačka 
