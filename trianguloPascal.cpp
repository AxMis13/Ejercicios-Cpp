/*
* Crea una función que sea capaz de dibujar el "Triángulo de Pascal"
* indicándole únicamente el tamaño del lado.
*
* - Aquí puedes ver rápidamente cómo se calcula el triángulo:
*   https://commons.wikimedia.org/wiki/File:PascalTriangleAnimated2.gif
*/

#include <iostream>
#include <vector>
using namespace std;

void gen_triangle(int n);
void calc_triangle(int n, vector <vector <int>>& triangle);
void print_triangle(int n, vector <vector <int>>& triangle);

int main(){
    int n, option;
    
    do{
        cout << "\n\tTriangulo de Pascal" << endl;
        cout << "Introduce el tamaño del triangulo: ";
        cin >> n;
        cout << endl;

        gen_triangle(n+1);

        cout << "\n¿Imprimir otro triangulo? (1 = si, 0 = no): ";
        cin >> option;

    }while(option != 0);

    cout << "Fin del programa" << endl;

    return 0;
}

void gen_triangle(int n){
    int i;
    vector <vector <int>> triangle;
    triangle.resize(n+1);
    for(i = 0; i <= n; i++)
        triangle[i].resize(n+1);

    calc_triangle(n, triangle);
}

void calc_triangle(int n, vector <vector <int>>& triangle){
    size_t i, j;

    for(i = 0; i <= triangle.size(); i++){
        for(j = 0; j <= triangle.size(); j++){
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

    print_triangle(n, triangle);
}

void print_triangle(int n, vector <vector <int>>& triangle){
    int i, j, separation = n;

    for(i = 0; i <= n; i++){
        
        for(j = 0; j < separation; j++)
            cout << " ";

        for(j = 0; j <= i; j++){
            cout << triangle[i][j];
        }

        separation--;
        cout << endl;
    }
}