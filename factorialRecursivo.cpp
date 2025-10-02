/*
 * Escribe una función que calcule y retorne el factorial de un número dado
 * de forma recursiva.
 */

#include <iostream>
using namespace std;

int factorial(int n);

int main(){

    int n, option, final;

    do{
        cout << "\n\tCalculadora de factoriales" << endl;
        cout << "Captura el número a calcular: ";
        cin >> n;

        final = factorial(n);
        cout << " = " << final << endl;

        cout << "¿Calcular otro numero? (si = 1, no = 0): ";
        cin >> option;
    }while(option != 0);

    cout << "\nFin del programa.";

    return 0;
}

int factorial(int n){
    if(n == 1){
        cout << n;   
        return n;
    }
    else{
        cout << n << " * ";
        return n * factorial(n - 1);
    }
}