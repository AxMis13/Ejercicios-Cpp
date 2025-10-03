/*
* Crea una función que sea capaz de dibujar el "Triángulo de Pascal"
* indicándole únicamente el tamaño del lado.
*
* - Aquí puedes ver rápidamente cómo se calcula el triángulo:
*   https://commons.wikimedia.org/wiki/File:PascalTriangleAnimated2.gif
*/

#include <iostream>
using namespace std;

int main(){

    int i, j, n, option;

    do{
        cout << "\n\tTriangulo de Pascal" << endl;
        cout << "Introduce el tamaño del triangulo: ";
        cin >> n;
        cout << endl;

        int triangle[n+1][n+1], separation = n;

        for(i = 0; i <= n; i++){
            for(j = 0; j <= i; j++){
                if(i == j){
                triangle[i][j] = 1;
                continue;
            }
            else if(j == 0)
                triangle[i][j] = 1;
            else
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }

        for(i = 0; i <= n; i++){
            for(j = 0; j < separation; j++)
                cout << " ";

            for(j = 0; j <= i; j++){
                cout << " " << triangle[i][j];
            }

            separation--;
            cout << endl;
        }

        cout << "\n¿Imprimir otro triangulo? (1 = si, 0 = no): ";
        cin >> option;

    }while(option != 0);

    cout << "Fin del programa" << endl;

    return 0;
}