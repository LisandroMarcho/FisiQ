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
	
}

int caidaLibre(){
	string unidadX = ".";
	string unidadt = ".";
	
	float t = 0;
	float g = -9.8;
	
	system("cls");
	cout << "Selecciona la ecuacion:" << endl;
	cout << "1. X = g * t" << endl << "2. X= 1/2 * g * (t^2)  " << endl;
	char opE = getch();
	system("cls");
	switch (opE){
		case '1':
		{	cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
			cout << "t = "; cin >> t; cout << endl;
			cout << "X = "<< g << " * "<<t<< endl;
			cout << "X = "<<(g*t)<<endl;
			break;
		}
	case '2':
		{	cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
			cout << "t = "; cin >> t; cout << endl;
			cout << "X = 1/2 * " << g << " * t^2 "<< endl;
			cout << "X = "<< (1/2 * g) <<" * "<< pow(t,2) << endl;
			cout << "X = " << (1/2 * g * pow(t,2)) <<endl;
			break;
		}
	}
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
		cout << endl << "Presiona cualquier tecla para salir para salir";
		op = int(getch());
		
		switch (op){
		case '1':
			mru();
			getch();
			break;
		case '2':
			mruv();
			getch();
			break;
		case '3':
			tiroVertical();
			getch();
			break;
		case '4':
			caidaLibre();
			getch();
			break;
		default:
			salir = false;
		}
	}
	return 0;
}
