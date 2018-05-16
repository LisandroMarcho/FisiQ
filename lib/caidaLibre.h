#include <iostream>
#include <math.h>
#include "conio.h"
#include "stdio.h"
using namespace std;

int caidaLibre()
{	
	string unidadh = ".";
	string unidadt = ".";
	string unidadVf = ".";
	string unidadg = ".";
	
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
				{cout << "Unidad de velocidad: "; cin >> unidadVf;
				 cout << "Unidad de aceleración: "; cin >> unidadg; 
				 cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
				 
				 cout << "G = "; cin >> g;
				 cout << "T = "; cin >> t; cout << endl;
				 
				 cout << "Vf = " << g << unidadg << " * " << t << unidadt << endl;
				 cout << "Vf = " << g*t << unidadVf << endl;
				 break;}	
			
			case '2':
				{cout << "Unidad de aceleración: "; cin >> unidadg;
				 cout << "Unidad de tiempo: "; cin >> unidadt; 
				 cout << "Unidad de altura: "; cin >> unidadh; cout << endl;
				 
				 cout << "G = "; cin >> g;
				 cout << "T = "; cin >> t; cout << endl;
				
				 cout << "H = 1/2 * " << g << unidadg << " * " << t << unidadt << " ^ 2" << endl;
				 cout << "H = " << g << unidadg << " * " << pow(t, 2)<< unidadt << "^2" << endl;
				 cout << "H = " << (4.9 * pow(t, 2))<< unidadh <<endl;
				 break;}
			
			case '3':
				{cout << "Unidad de tiempo: "; cin >> unidadt;
				 cout << "Unidad de velocidad: "; cin >> unidadVf;
				 cout << "Unidad de aceleración: "; cin >> unidadg; cout << endl;
				 
				 cout << "Vf = "; cin >> vf;
				 cout << "G = "; cin >> g; cout << endl;
				 
				 cout << "T = " << "Raiz de " <<vf << unidadVf << " / " << g << unidadg << endl;
				 cout << "T = " <<sqrt(vf/g) << unidadt;
				 break;}} getch();
} 
