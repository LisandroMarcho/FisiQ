#include <iostream>
#include <math.h>
#include "conio.h"
#include "stdio.h"
using namespace std;

int caidaLibre()
{	string unidadh = ".";
	string unidadt = ".";
	string unidadVf = ".";
	
	float t = 0;
	float g = 9.8;
	float h = 0;
	float vf = 0;
	
	system("cls");

		cout << "Selecciona la ecuacion:" << endl;
		cout << "1. Vf = g * t" << endl << "2. H = 1/2 * g * t^2 " << endl << "3. T = Vf / g" << endl;
		char opE = getch();
		system("cls");
		switch (opE) 
			{case '1':
				{cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
				cout << "T = "; cin >> t; cout << endl;
				cout << "Vf = " << g << "M/s^2" << " * " << t << unidadt << endl;
				cout << "Vf = " <<(g*t) << "M/s "<<endl;
				getch(); break;}	
			
			case '2':
				{cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
				cout << "T = "; cin >> t; cout << endl;
				cout << "H = 1/2 * " << g << "M/s^2" << " * " << t << unidadt << " ^ 2" << endl;
				cout << "H = 4.9M/s^2 * " << pow(t, 2)<< unidadt << "^2" << endl;
				cout << "H = " << (4.9 * pow(t, 2))<< "M" <<endl;
				getch(); break;}
			
			case '3':
				{cout << "Unidad de velocidad: "; cin >> unidadVf;
				 cout << "Vf = "; cin >> vf; cout << endl;
				 cout << vf << unidadVf << " = " << g << "M/s^2" << " * " << "T^2" << endl;
				 cout << (vf/g) << "s" << " = T";
				 getch(); break;}}	
}
