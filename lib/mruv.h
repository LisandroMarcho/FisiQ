#include <iostream>
#include <math.h>
#include "conio.h"
using namespace std;

int mruv(){
	string unidadX = ".";
	string unidadv = ".";
	string unidadt = ".";
	
	float Xo = 0;
	float a = 0;
	float vo = 0;
	float vf = 0;
	float t = 0;
	float to = 0;
	float tf = 0;
	
	system("cls");
	cout << "Selecciona la ecuación:" << endl;
	cout << "1. X = Xo + Vo * t + 1/2 * a * t^2 " << endl << "2. vf = vo + a * t" << endl << "3. a = (vf - vo) / (tf - to)" << endl;
	char opE = getch();
	system("cls");
	switch (opE){
	case '1':
	{
		cout << "Unidad de posición: "; cin >> unidadX;
		cout << "Unidad de velocidad: "; cin >> unidadv;
		cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
		
		cout << "Xo = "; cin >> Xo;
		cout << "vo = "; cin >> vo;
		cout << "a = "; cin >> a;
		cout << "t = "; cin >> t; cout << endl;
		
		cout << "X = " << Xo << unidadX << " + " << vo << unidadv << " * " << t << unidadt << " + 1/2 * " << a << "(" << unidadv << ")/" << unidadt << " * (" << t << unidadt << ")^2" << endl;
		cout << "X = " << Xo << unidadX << " + " << (vo*t) << unidadX << " + " << ( 0.5 * a * pow(t, 2)) << unidadX << endl;
		cout << "X = " << (Xo + (vo * t) + (0.5 * a * pow(t, 2))) << unidadX;
		break;
	}
	case '2':
	{
		cout << "Unidad de posición: "; cin >> unidadX;
		cout << "Unidad de velocidad: "; cin >> unidadv;
		cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
		
		cout << "vo = "; cin >> vo;
		cout << "a = "; cin >> a;
		cout << "t = "; cin >> t; cout << endl;
		
		cout << "Vf = " << vo << unidadv << " + " << a << "(" << unidadv << ")/" << unidadt << " * " << t << unidadt << endl;
		cout << "Vf = " << vo << unidadv << " + " << (a * t) << unidadv << endl;
		cout << "Vf = " << (vo + (a * t)) << unidadv << endl;
		break;
	}
	case '3':
	{	
		cout << "Unidad de posición: "; cin >> unidadX;
		cout << "Unidad de velocidad: "; cin >> unidadv;
		cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
		
		cout << "vf = "; cin >> vf;
		cout << "vo = "; cin >> vo;
		cout << "tf = "; cin >> tf;
		cout << "to = "; cin >> to; cout << endl;
		
		cout << "a = (" << vf << unidadv << " - " << vo << unidadv << ") / (" << tf << unidadt << " - " << to << unidadt << ")" << endl;
		cout << "a = " << (vf - vo) << unidadv << " / " << (tf - to) << unidadt << endl;
		cout << "a = " << ((vf - vo)/(tf - to)) << "(" << unidadv << ")/" << unidadt << endl;
		break;
	}
	}
	getch();
}

