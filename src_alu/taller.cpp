
#include <iostream>
#include <math.h>
#include<stdio.h>
#include <cmath>
#include "taller.h"
#include <vector>
#include <algorithm>

using namespace std;
/* IMPORTANTE: <math.h> y <cmath> se incluyen
 * solo para que utilicen abs() y pow(),
 * si las neceistaran. */


// Ejercicio 0
// Dados enteros a y b, decide si 'a' divide a 'b'.
bool divide(int a, int b)
{
    return a % b == 0;
}

// Ejercicio 1
// Dados dos enteros a y b, devuelve el mayor.
int mayor(int a, int b)
{
    if(a > b) return a;
    else if (b > a) return b;
}

// Ejercicio 2
// Dado un n, devuelve el factorial de n.
unsigned int factorialPorCopia(int n)
{
    if (n >= 0)
    {
        for(int i = n - 1; i > 1; i-- ) n = n * i;
        unsigned int r = n;
        return r;
    } 

}

// Ejercicio 3
// Dado un n por teclado, imprimir el factorial de n por pantalla.
// Hint: Usar la función anterior
void factorialPorTeclado()
{
    int n;
    cin >> n;
    cout << factorialPorCopia(n);
}

vector<int> descomponer(int number);

//Ejercicio 4
// Dado un n por teclado, devuele true si y solo sí n es primo
bool esPrimo(int n)
{
    if (n > 0) return ((descomponer(n)).size() == 1);
    else return 0;
}

vector<int> descomponer(int number)
{
    std::vector<int> factores;
    factores.push_back(number);
    
    while (1)
    {
        vector<int> factores_descompuestos;

        for (auto i = factores.begin(); i != factores.end(); i++)
        {
            int factor = *i;
            int resto = pow(factor, 0.5);
            bool fb = true;
            for (int n = resto; n > 1; n--)
            {
                if (divide(factor, n))
                {
                    factores_descompuestos.push_back(n);
                
                    int factor_descompuesto = (factor / n);
                    factores_descompuestos.push_back(factor_descompuesto);
                    fb = false;
                    break;

                } 
            }
            if (fb) factores_descompuestos.push_back(factor);
        }
        
        sort(factores.begin(), factores.end());
        sort(factores_descompuestos.begin(), factores_descompuestos.end());
 
        if (factores == factores_descompuestos) return factores;

        factores = factores_descompuestos;
    }
}

// Ejercicio 5
// Dado un n, la función debe determinar si existe otro número m tal que n y m son primos gemelos
// Dos numeros son primos gemelos si son primos y están a distancia 2.
// Q y P son primos gemelos si P=Q+2, por ejemlo 3 y 5, 5 y 7, 11 y 13...
bool primoGemelo(int n)
{  
    return (esPrimo(n) && (esPrimo(n+2) || esPrimo(n-2)));
}

// Ejercicio 6
// Dado un sting, detemina si es un palindromo.
// Por ejemplo: la entrada "hola mundo", deberia dar por resultado:
// "Numero: NO, Palindromo: NO". Mientras que "severlasalreves" deberia dar 
// "Numero: NO, Palindromo: SI"
// Hint: Ver las funciones at() y isdigit() del tipo string.
void esCapicua(string s)
{
    bool palindromo = 1;
    bool numero = 1;
    for(int i = 0; i < s.length(); i++ )
    {
        if (s.at(i) != s.at(s.length()-i-1)) palindromo = 0;
        if (not isdigit(s.at(i))) numero = 0;
    }
    cout << "Numero: " << (numero?"SI":"NO") << ", Palindromo: " << (palindromo?"SI":"NO") << endl;;
}

// Ejercicio 7
// Dado un n, voy a escribir la secuencia de numeros de 0 a n
// Por ejemplo, n=4, da 0,1,2,3,4
void numerosHasta(int n)
{
    for (int i = 0; i < n; i++) cout << i << ", "; 
    cout << n << "." << endl;
}

// Ejercicio 8
// Dado un n, escribir por pantalla una escalera desde 0 hasta n.
// Ejemplo: n=3, deberia mostrar:
// 0
// 0 1
// 0 1 2
// 0 1 2 3
// Hint: Usar la función anterior
void escaleraSimple(int n)
{
    for (int i = 0; i <= n; i++)
    {
        // ACLARACIÓN: 
        // Podría haberse utilizado la función numerosHasta() 
        // pero se evitó a fin de mantener la fidelidad
        // con el formato del ejemplo.

        for (int j = 0; j < i; j++) cout << j << " "; 
        cout << i << endl;
    }
}

// Ejercicio 9
// Dado un 'n', dice si es numero perfecto o no
// Los numeros perfectos son enteros tales que su valor
// es igual a la suma de sus divisores
// Por ejemplo, 6 = 3+2+1... 28=1+2+4+7+14, etc...
bool esPerfecto(int n)
{

}

// Ejercicio 10 (opcional)
// Dado un n capturado por teclado, imprimir el triangulo de pascal de grado n
// Por ejemplo, para n=5, deberia dar
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
void pascal()
{

}

// Ejercicio 11 (opcional)
// Dado un k positivo, devolver el k-esimo numero de la susesion de fibonacci.
long fibonacci(int k)
{
    if (k >= 0)
    {
        long fn2 = 0;
        long fn1 = 1;
        if (!k) return fn2;
        
        for (int n = 2; n < k+1; n++)
        {
            long fn = fn1 + fn2;
            fn2 = fn1;
            fn1 = fn;
        }

        return fn1;
    }
    else return -1;
}   

// Ejercicio 12 (opcional)
// Dado un n PAR capturado por teclado, intenta ver si la Conjetura de Golbach es valida para ese n.
// Golbach dijo que todo entero n PAR estrictamente mayor a dos es expresable como
// la suma de dos numeros primos(se puede repetir el primo).
// Por ejemplo, 10=3+7, 1984=107+1877, etc...
void golbach()
{


}