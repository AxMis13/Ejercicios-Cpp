/*
Regresa una cadena de texto en sentido inverso.
Además verifica si la palabra es palíndromo.
*/

#include <iostream>
using namespace std;

int main(){
    char cad[25];
    int i,j,cont,band;

    cout << "Ingresa la cadena de texto: ";
    cin.getline(cad,25,'\n');

    cont = -1;                              // contador para conocer la longitud de la cadena
    for (i = 0; i < 25; i++)                // se recorre la longitud de la cadena
        if (cad[i] == '\0'){                // cuando se llega al final se finaliza el for
            break;
        }
        else{
            cont++;
        }

    for (i = cont; i >= 0; i--)             // se imprime la cadena de manera inversa
        cout << cad[i];
    
    band = 0;                               // bandera para saber si hay diferencia en la cadena
    for (i = 0; i <= cont; i++)
        if (cad[i] != cad[cont - i]){       // si un caracter difiere, se termina el for
            band = 1;
            break;
        }
    
    cout << endl;

    if (band == 0)
        cout << "Es palindromo.";
    else
        cout << "No es palindromo.";
            
    cout << endl;

    return 0;
}
