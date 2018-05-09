#include <iostream>
#include <math.h>
#include "conio.h"
using namespace std;

int tiroVertical(){
	string unidadX = ".";
	string unidadv = ".";
	string unidadt = ".";
	
	float Vo = 0;
	float t = 0;
	float g = 0;
	
	system("cls");
	cout << "Selecciona la ecuación:" << endl;
	cout << "1. X = Vo * t - 1/2 * g * (t)^2" << endl << "2. Vf = Vo - g * t" << endl;
	char opE = getch();
	system("cls");
	switch (opE){
	case '1':
	{
		cout << "Unidad de posición: "; cin >> unidadX;
		cout << "Unidad de velocidad: "; cin >> unidadv;
		cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
		
		cout << "Vo = "; cin >> Vo;
		cout << "t = "; cin >> t;
		cout << "g = "; cin >> g; cout << endl;
		
		cout << "X = " << Vo << unidadv << " * " << t << unidadt << " - 1/2 * " << g  << " (" << unidadv << ")/" << unidadt << " * (" << t << unidadt << ")^2" << endl;
		cout << "X = " << (Vo * t) << unidadX << " - " << (0.5 * g * pow(t,2)) << unidadX << endl;
		cout << "X = " << ((Vo * t)-(0.5*g*pow(t,2))) << unidadX << endl;
		break;
	}
	case '2':
	{
		cout << "Unidad de posición: "; cin >> unidadX;
		cout << "Unidad de velocidad: "; cin >> unidadv;
		cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
		
		cout << "Vo = "; cin >> Vo;
		cout << "t = "; cin >> t;
		cout << "g = "; cin >> g; cout << endl;
		
		cout << "X = " << Vo << unidadv << " - " << t << unidadt << " - " << g  << " (" << unidadv << ")/" << unidadt << " * " << t << unidadt << endl;
		cout << "X = " << Vo << unidadv << " - " << (g * t) << unidadv << endl;
		cout << "X = " << (Vo - (g*t)) << unidadv << endl;
		break;
	}
	}
	getch();
}
