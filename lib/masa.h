#include <iostream>
#include <math.h>
#include "conio.h"
using namespace std;

int masa ()
{	string unidadf = ".";
	string unidadm = ".";
	string unidada = ".";
	
	int f = 0;
	int m = 0;
	int a = 0;
	
	system("cls");
	cout << "Selecciona la ecuacion:" << endl;
	cout << "1. F = m / a" << endl << "2. A = f / m " << endl << "3. M = f / a" << endl;
	char opE = getch();
	system("cls");
	switch (opE) 
	{case '1':
			{cout << "Unidad de fuerza: "; cin >> unidadf; cout << endl;
			 cout << "M = "; cin>> m;
			 cout << "A = " ; cin>> a;
			 cout<< "F = " << m << "Kg" << " / " << a << "M/s^2" << endl;
			 cout<< "F = " << m/a << unidadf << endl;
			 getch(); break;}
	case '2': 
			{cout << "F = "; cin >> f;
			 cout << "M = "; cin >> m;
			 cout << "A = " << f << " Kg*M/s^2 " << " / " << m << "Kg" << endl;
			 cout << "A = " << f/m << " M/s^2 ";
			 getch(); break;}
	case '3':
			{cout << "F = "; cin >> f;
			 cout << "A = "; cin >> a;
			 cout << "M = " << f << "Kg*M/s^2 " << " / " << a << "M/s^2 " << endl;
			 cout << "M = " << f/a << "Kg ";
			 getch(); break;}}	
	
	
	}
		
	
	
	
	
	

