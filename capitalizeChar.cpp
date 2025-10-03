/*
 * Crea una función que reciba un String de cualquier tipo y se encargue de
 * poner en mayúscula la primera letra de cada palabra.
 * - No se pueden utilizar operaciones del lenguaje que
 *   lo resuelvan directamente.
 */

#include <iostream>
using namespace std;

int main(){

    string frase;
    int i, opcion;

    cout << "\n\tPrimer letra en mayuscual";
    do{
        cout << "\nIngresa una o varias palabras: ";
        getline(cin, frase);

        for(i = 0; i < frase.size(); i++){
            if(frase[i] == 32){
                if(frase[i+1] >= 97 and frase[i+1] <= 122)
                    frase[i+1] -= 32;
            }
            else if(i == 0 and (frase[i] >= 97 and frase[i] <= 122)){
                frase[i] -= 32;
            }
        }

        cout << endl << frase << endl;
        
        cout << "\n¿Quieres ingresar mas palabras? (si = 1, no = 0): ";
        cin >> opcion;
        cin.ignore();

    }while(opcion != 0);

    return 0;
}