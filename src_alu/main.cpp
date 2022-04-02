#include <string>
#include <stdio.h>
#include <iostream>
#include "taller.h"

using namespace std;

int main()
{
	cout << "divide: " << divide(3,7) << endl;

	cout << "mayor: " << mayor(7,2) << endl;

	cout << "Factorial por copia: " << factorialPorCopia(10) << endl;

	// factorialPorTeclado();

	cout << "Es primo: "<< esPrimo(-4) << endl;

	cout << "Primo gemelo: "<< primoGemelo(3) << endl;
	
	esCapicua("121");

	numerosHasta(21);

	escaleraSimple(21);

	cout << "Es perfecto: "  << esPerfecto(2) << endl;
}
