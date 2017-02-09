// Author         : Ivan de Jesus May-Cen
// Email          : imaycen@hotmail.com, imay@itsprogreso.edu.mx
// Language       : C++
// Environment    : Linux
// Compiler       : g++
// Revisions      :
//        Initial : 09.02.2017
//           Last : 

// Este programa compila en la consola de linux mediante la orde
// g++ main.cpp -o sumatoria
// "sumatoria" es el nombre del ejecutable

//Inclusion de librerias
#include <iostream>

//Declaracion de funciones
double suma_sucesion(int i0, int iN, int opcion);
double sucesion(int i, int opcion);

using namespace std;

//Funcion principal
int main( )
{
double sumatoria;
int i0 = 3, iN = 7, opcion = 3;

//Llama a funcion que determina la suma
sumatoria = suma_sucesion(i0, iN, opcion);

//Imprime resultados
cout << "La sumatoria es: " << sumatoria << endl;

return 0;
}
//********************************************************
// Funcion para efectuar sumatoria
//
// Input  : limites inferior y superior i0, iN, opcion de sucesion
// Output : resultado de la sumatoria en suma
//********************************************************
double suma_sucesion(int i0, int iN, int opcion)
{
double suma = 0.0;
int i;
for( i = i0; i <= iN; i++ )
 suma+= sucesion(i, opcion);

return suma;
}
//********************************************************
// Se definen opciones para sucesion
//
// Input   : indice i, opcion de sucesion
// Output  : evaluacion de la sucesion en el indice i
//********************************************************
double sucesion(int i, int opcion)
{
double valor;

if(opcion == 1)
 valor = i;
 else
 if(opcion == 2)
 valor =i+2;
 else
 if(opcion == 3)
 valor =i*i;

return valor;
}
