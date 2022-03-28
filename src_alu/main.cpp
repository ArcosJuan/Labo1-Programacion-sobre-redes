#include <string>
#include <stdio.h>
#include <iostream>
#include "taller.h"

using namespace std;

int main()
{
	cout << "Función divide: " << divide(7,3) << endl;

	cout << "Función mayor: " << mayor(7,2) << endl;

	cout << "Factorial por copia: " << factorialPorCopia(10) << endl;

	// factorialPorTeclado();

	cout << esPrimo(4) << endl;
}