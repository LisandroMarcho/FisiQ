#include <iostream>
#include <math.h>
#include "conio.h"
using namespace std;

int caidaLibre(){
	string unidadX = ".";
	string unidadt = ".";
	
	float t = 0;
	float g = 9.8;
	
	system("cls");
	cout << "Selecciona la ecuacion:" << endl;
	cout << "1. VF = g * t" << endl << "2. H = 1/2 * g * t^2 " << endl;
	char opE = getch();
	system("cls");
	switch (opE)
	{
	case '1':
	{	
		cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
		cout << "T = "; cin >> t; cout << endl;
		cout << "VF = "<< g <<"M/s^2" << " * "<<t<<unidadt<< endl;
		cout << "VF = "<<(g*t)<<"M/s "<<endl;
		getch();
		break;
	}	
	case '2':
	{
		cout << "Unidad de tiempo: "; cin >> unidadt; cout << endl;
		cout << "T = "; cin >> t; cout << endl;
		cout << "H = 1/2 * " << g <<"M/s^2" << " * "<<t <<unidadt<<" ^ 2"<< endl;
		cout << "H = 4.9M/s^2 * "<< pow(t, 2)<<unidadt<<"^2"<< endl;
		cout << "H = " << (4.9 * pow(t, 2))<<"M" <<endl;
		getch();
		break;
	}
	}
}
