#include <iostream>
#include "math.h"
#include "conio.h"

#include "lib/mru.h"
#include "lib/mruv.h"
#include "lib/tiroVertical.h"
#include "lib/caidaLibre.h"

using namespace std;

int main(int argc, char *argv[]) {
	
	int op;
	bool salir = true;
	
	while(salir == true)
	{
		system("cls");
		
		cout << "### FísiQ ###" << endl;
		cout << "¿Qué movimiento desea calcular?" << endl << endl;
		cout << "1. MRU" << endl << "2. MRUV" << endl << "3. Tiro Vertical" << endl << "4. Caida Libre" << endl;
		cout << endl << "Presiona cualquier tecla para salir";
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
		default:
			salir = false;
		}
	}
	return 0;
}
