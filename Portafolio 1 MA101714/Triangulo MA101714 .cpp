#include <iostream>
#include <string> 
#include <cstdlib>
#include "procesos.h"

int main() {
using namespace std; 
int opcion;
cout << "\n Gabriela Estefany Morales Alas - MA101714 \n \n";
cout << "Opciones: \n"; 
cout << "1. Tipo de Triangulo y Calculo de Area. \n 2. Identificacion del mayor numero. \n 3. Promedio. \n \n";
cin >> opcion;
if(opcion=1 || opcion==2 || opcion==3){

switch(opcion) { 
    case 1:
        IngresarLados ();
        break;
    case 2:
        IngresarDatos ();
        break;
    case 3:
        promedio();
        break;

}

} else {

cout << "La opcion seleccionada no existe\n";
}
return 0;
}
