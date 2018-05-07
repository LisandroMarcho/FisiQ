#include <iostream>
#include "math.h"
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
	getch();
}

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
	cout << "1. X = Xo + Vo * t + 1/2 * a * t" << endl << "2. vf = vo + a * t" << endl << "3. a = (vf - vo) / (tf - to)" << endl;
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

int tiroVertical(){
	string unidadX = ".";
	string unidadv = ".";
	string unidadt = ".";
	
	float Vo = 0;
	float t = 0;
	float g = 0;
	
	system("cls");
	cout << "Selecciona la ecuación:" << endl;
	cout << "1. X = Vo * t - 1/2 * g * (t^2)" << endl << "2. Vf = Vo - g * t" << endl;
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
			
			cout << "X = " << Vo << unidadv << " * " << t << unidadt << " - 1/2 * " << g  << unidadv << "^2 * (" << t << unidadt << ")^2" << endl;
			//cout << "a = " << (vf - vo) << unidadv << " / " << (tf - to) << unidadt << endl;
			//cout << "a = " << ((vf - vo)/(tf - to)) << "(" << unidadv << ")/" << unidadt << endl;
			break;
		}
	}
	getch();
}
int main(int argc, char *argv[]) {
	
	char op = '0';
	cout << "### FísiQ ###" << endl;
	cout << "¿Qué movimiento desea calcular?" << endl << endl;
	cout << "1. MRU" << endl << "2. MRUV" << endl << "3. Tiro Vertical" << endl << "4. Caida Libre" << endl;
	op = getch();
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
		break;
	default:
		cout << "¿Seguro quieres salir?" << endl << "Presiona cualquier tecla para salir / 'N' para volver al menú";
		op = getch();
		if (op == 'N'){
		
		}
	}

	return 0;
}
