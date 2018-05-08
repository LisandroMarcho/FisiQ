#include <iostream>
#include <math.h>
#include "conio.h"
using namespace std;

int mru(){
	string unidadX = ".";
	string unidadv = ".";
	string unidadt = ".";
	
	float Xo = 0;
	float Xf = 0;
	float v = 0;
	float t = 0;
	float to = 0;
	float tf = 0;
	
	system("cls");
	cout << "Selecciona la ecuación:" << endl;
	cout << "1. X = Xo + v * t" << endl << "2. v = (Xf - Xo) / (tf - ro)" << endl;
	char opE = getch();
	system("cls");
	switch (opE) {
	case '1':
	{
		cout << "Unidad de posición: "; cin >> unidadX;
		cout << "Unidad de velocidad: "; cin >> unidadv;
		cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
		
		cout << "Xo = "; cin >> Xo;
		cout << "v = "; cin >> v;
		cout << "t = "; cin >> t; cout << endl;
		
		cout << "X = " << Xo << unidadX << " + " << v << unidadv << " * " << t << unidadt << endl;
		cout << "X = " << Xo << unidadX << " + " << (v*t) << unidadX << endl;
		cout << "X = " << (Xo + (v*t)) << unidadX << endl;
		break;
	}
	case '2':
	{				
		cout << "Unidad de posición: "; cin >> unidadX;
		cout << "Unidad de velocidad: "; cin >> unidadv;
		cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
		
		cout << "Xf = "; cin >> Xf;
		cout << "Xo = "; cin >> Xo;
		cout << "tf = "; cin >> tf;
		cout << "to = "; cin >> to; cout << endl;
		
		cout << "V = (" << Xf << unidadX << " - " << Xo << unidadX << ") / (" << tf << unidadt << " - " << to << unidadt << ")" << endl;
		cout << "V = " << (Xf - Xo) << unidadX << " / " << (tf - to) << unidadt << endl;
		cout << "X = " << ((Xf - Xo)/(tf - to)) << unidadv << endl;
		break;
	}
	}
}
