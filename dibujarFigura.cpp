/*
 * Crea un programa que dibuje un cuadrado o un triángulo con asteriscos "*".
 * - Indicaremos el tamaño del lado y si la figura a dibujar es una u otra.
 * - EXTRA: ¿Eres capaz de dibujar más figuras?
 */
 #include <iostream>
 using namespace std;
 
 int main(){
   int option, base, height, i, j, separation;

   do{
     cout << "\n\tDibujar figuras\n";
     cout << " 1. Cuadrado\n 2. Rectangulo\n 3. Triangulo\n 4. Salir\n";
     cout << "Selecciona una opcion: ";
     cin >> option;

     switch(option){
       case 1:
         cout << "Ingresa la base del cuadrado: ";
         cin >> base;
         cout << endl;

         for(i = 0; i < base; i++){
           for(j = 0; j < base; j++)
             cout << "  *";
           cout << endl;
         }
         break;
       case 2:
         cout << "Ingresa la base del rectangulo: ";
         cin >> base;
         cout << "Ingresa la altua del rectangulo: ";
         cin >> height;
         cout << endl;

         for(i = 0; i < height; i++){
           for(j = 0; j < base; j++)
             cout << " *";
           cout << endl;
         }
         break;
       case 3:
         cout << "Ingresa la base del triangulo: ";
         cin >> base;
         cout << endl;
         if(base < 2){
          cout << "No es posible dibujar un triangulo con esa base" << endl;
         }
         else{
          separation = base - 1;
          for(i = 0; i < base; i++){
            for(j = 0; j < separation; j++)
              cout << " ";
            for(j = 0; j <= i; j++)
              cout << " *";
            
            separation--;
            cout << endl;
          }
         }
         break;
       case 4:
         cout << "Fin del programa";
         break;
       default: 
         cout << "Opcion invalida" << endl;
     }
   }while(option != 4);

   return 0;
 }
