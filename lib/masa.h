#include <iostream>
#include <math.h>
#include "conio.h"
using namespace std;

int masa ()
{	string unidadf = ".";
	string unidadm = ".";
	string unidada = ".";
	
	float f = 0;
	float m = 0;
	float a = 0;
	
	system("cls");
	cout << "Selecciona la ecuacion:" << endl;
	cout << "1. F = m / a" << endl << "2. A = f / m " << endl << "3. M = f / a" << endl;
	char opE = getch();
	system("cls");
	switch (opE) 
	{case '1':
			{cout << "Unidad de fuerza: "; cin >> unidadf; 
			 cout << "Unidad masa "; cin >> unidadm; 
			 cout << "Unidad de aceleración: "; cin >> unidada; cout << endl;
			 
			 cout << "M = "; cin>> m;
			 cout << "A = " ; cin>> a; cout << endl; 
			 
			 cout<< "F = " << m << unidadm << " / " << a << unidada << endl;
			 cout<< "F = " << m/a << unidadf << endl;
			 break;}
	case '2': 
			{cout << "Unidad de aceleración: "; cin >> unidada; 
			 cout << "Unidad fuerza "; cin >> unidadf; 
			 cout << "Unidad de masa: "; cin >> unidadm; cout << endl;
			
			 cout << "F = "; cin >> f;
			 cout << "M = "; cin >> m; cout << endl;
			 
			 cout << "A = " << f << unidadf << " / " << m << unidadm << endl;
			 cout << "A = " << f/m << unidada;
			 break;}
	case '3':
			{cout << "Unidad de masa: "; cin >> unidadm;
			 cout << "Unidad de fuerza: "; cin >> unidadf; 
			 cout << "Unidad de aceleración: "; cin >> unidada; cout << endl;
			 
			 cout << "F = "; cin >> f;
			 cout << "A = "; cin >> a; cout << endl;
			 
			 cout << "M = " << f << unidadf << " / " << a << unidada << endl;
			 cout << "M = " << f/a << unidadm;
			 break;}} getch();
	
	
	}
		
	
	
	
	
	

