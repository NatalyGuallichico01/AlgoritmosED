#include <iostream>
#include <operaciones>
#include <demoaed>
#include "quicksort.h"
#include "ingresar.h"


using namespace std;
using namespace palabraclave;
using namespace imprimir;
using namespace funciones;
using namespace operaciones;



int main()
{
    int A[10]= {88, -6, 69, -33, 98, 7, 23, -5, 0, 100};
    imprimirArreglo(A,10);
    cout<<endl;
    ordenar(A,0,9);
    imprimirArreglo(A,10);
    cout<<endl;
    cout<<suma(7,8);
    cout<<endl;
    cout<<multi(4,6);
    return 0;
}








