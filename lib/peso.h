#include <iostream>
#include <math.h>
#include "conio.h"
#include "stdio.h"
using namespace std;

int peso ()
{
	string unidadp = ".";
	string unidadm = ".";
	string unidadg = ".";
	
	float p = 0;
	float m = 0;
	float g = 0;
	
	system("cls");
		
		cout << "Selecciona la ecuacion:" << endl;
		cout << "1. P = m * g " << endl << "2. M = p / g " << endl << "3. G = p / m " << endl;
		char opE = getch();
		system("cls");
		switch (opE) 
			{case '1':
					{cout << "Unidad de peso: "; cin >> unidadp; 
					 cout << "Unidad de masa: "; cin >> unidadm; 
					 cout << "Unidad de aceleración "; cin >> unidadg; cout << endl;
				 
					 cout << "M = "; cin >> m;
					 cout << "G = "; cin >> g; cout << endl;
				 
					 cout << "P = " << m << unidadm << " * " << g << unidadg << endl;
					 cout << "P = " << m*g << unidadp;
					 break;}
			 case '2':
					{cout << "Unidad de masa: "; cin >> unidadm;
					 cout << "Unidad de peso: "; cin >> unidadp;
					 cout << "Unidad de aceleración "; cin >> unidadg; cout << endl;
					
					 cout << "P = "; cin >> p; 
					 cout << "G = "; cin >> g; cout << endl;
					 
					 cout << "M = " << p << unidadp << " / " << g << unidadg<< endl;
					 cout << "M = " << m/g << unidadm;
					 break;}
			 case '3':
					 {cout << "Unidad de aceleración "; cin >> unidadg; 
					 cout << "Unidad de peso: "; cin >> unidadp;
					 cout << "Unidad de masa: "; cin >> unidadm; cout << endl;
					 
					 cout << "P = "; cin >> p; 
					 cout << "M = "; cin >> m; cout << endl;
					 
					 cout << "G = " << p << unidadp << " / " << m << unidadm<< endl;
					 cout << "G = " << p/m << unidadg;
					 break;}}getch ();
}
