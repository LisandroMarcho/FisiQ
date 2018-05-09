#include <iostream>
#include "math.h"
#include "conio.h"

#include "lib/mru.h"
#include "lib/mruv.h"
#include "lib/tiroVertical.h"
#include "lib/caidaLibre.h"
using namespace std;

int creditos(){
	system("cls");
	cout << "FísiQ [https://github.com/LisandroMarcho/FisiQ]" << endl << endl;
	cout << "Desarollado por:" << endl << "Lisandro Marchionni [https://github.com/LisandroMarcho]" << endl << "Juan Bravo [https://github.com/F04n]";
}

int main(int argc, char *argv[]) {
	
	int op;
	bool salir = true;
	
	while(salir == true)
	{
		system("cls");
		
		cout << "### FísiQ ###" << endl;
		cout << "¿Qué movimiento desea calcular?" << endl << endl;
		cout << "1. MRU" << endl << "2. MRUV" << endl << "3. Tiro Vertical" << endl << "4. Caida Libre" << endl;
		cout << endl << "Pulsa 'Esc' para salir";
		op = int(getch());
		
		switch (op){
		case '1':
			mru();
			break;
		case '2':
			mruv();
			break;
		case '3':
			tiroVertical();
			break;
		case '4':
			caidaLibre();
			break;
		case 'c':
			creditos();
			getch();
			break;
		case 'C':
			creditos();
			getch();
			break;	
		case 27:
			salir = false;
			break;
		}
	}
	return 0;
}
