#include <iostream>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <string.h>
 
using namespace std;
 
//Gabriela Estefany Morales Alas MA101714
string Usuario();
string Usuario1();
string Maquina();
string Maquina1();
void DeterminaGanador(string, string string);
void DeterminaGanador1(string, string, string, string, string);
 
string Usuario(){
 
int eleccion;
 
do{
cout<< "Porfavor presiona 1=Papel, 2=Piedra, 3=Tijeras: ";
cin>>eleccion;
 
 
}while(eleccion < 1 || eleccion > 3);
 
 
if(eleccion == 1)
return "Papel";
else if(eleccion == 2)
return "Piedra";
else
return "Tijeras";
 
}
 
string Usuario1(){
 
int eleccion;
 
do{
 
cout<< "Porfavor presiona 1=Papel, 2=Piedra, 3=Tijeras, 4=Spock, 5=Lagarto: ";
cin>>eleccion;
 
}while(eleccion < 1 || eleccion > 5);
 
if(eleccion == 1)
return "Papel";
 
else if(eleccion == 2)
return "Piedra";
else if(eleccion == 3)
return "Tijeras";
else if(eleccion == 4)
return "Spock";
 
else
return "Lagarto";
 
}
 
string Maquina(){
int numero;
 
numero = (rand()%3)+1;
 
if(numero ==1)
return "Papel";
else if(numero == 2)
return "Piedra";
else
return "Tijeras";
 
}
 
string Maquina1(){
int numero;
 
numero = (rand()%5)+1;
 
if(numero ==1)
return "Papel";
else if(numero == 2)
return "Piedra";
else if(numero == 3)
return "Tijeras";
else if(numero == 4)
return "Spock";
else
return "Lagarto";
 
}
 
void DeterminaGanador(string nombre, string Jugador, string Maquina){
int ganar, empatar, perder;
if(Jugador == Maquina)
cout<< "Empate" << endl;
else
if((Jugador == "Piedra" && Maquina == "Tijeras") ||
(Jugador == "Papel" && Maquina == "Piedra") ||
(Jugador == "Tijeras" && Maquina == "Papel") )
 
cout << "Resultado: "<< nombre<< " Eres el Ganador"<< endl;
 
else
cout << "Resultado: La Maquina Gana"<<endl;
 
}
 
void DeterminaGanador1(string nombre, string Jugador, string Maquina){
int ganar, perder, empatar;
if(Jugador == Maquina)
cout<< "Empate" << endl;
 
else if((Jugador == "Piedra" && Maquina == "Tijeras") ||
(Jugador == "Papel" && Maquina == "Piedra") ||
(Jugador == "Tijeras" && Maquina == "Papel") ||
(Jugador == "Piedra" && Maquina == "Lagarto") ||
(Jugador == "Lagarto" && Maquina == "Spock") ||
(Jugador == "Spock" && Maquina == "Tijeras") ||
(Jugador == "Tijeras" && Maquina == "Lagarto") ||
(Jugador == "Lagarto" && Maquina == "Papel") ||
(Jugador == "Papel" && Maquina == "Spock") ||
(Jugador == "Spock" && Maquina == "Piedra") )
 
cout << "Resultado: "<< nombre<<"Eres el Ganador" << endl;
 
else
cout << "Resultado: La Maquina Gana" << endl;
 
}
 
struct nombreUsuario{
 
char nombre[20];
 
}nombreUsuario1;
 
int main()
{
string movimientoJugador;
string OponenteMovimiento;
char res;
srand(time(NULL));
string nombreJugador;
int seleccion;
int eleccion;
 
 
cout<<"Indica el numero de tu seleccion" <<endl;
cout<<"(1) Iniciar Juego"<<endl;
cout<<"(2) Salir"<<endl;
cin>>seleccion;
 
 
if(seleccion==1){
 
cout <<"Bienvenido al Juego. Porfavor Introduce un nombre: ";
cin.getline(nombreUsuario1.nombre, 20, '\n');
 
cout<<"Hola: "<<nombreUsuario1.nombre<<endl;
 
cout<<"Indica como quieres jugar"<<endl;
cout<<"(1) Normal"<<endl;
cout<<"(2) Avanzado"<<endl;
cin>>eleccion;
 
if(eleccion==1){
 
do{
movimientoJugador = Usuario();
OponenteMovimiento = Maquina();
 
cout << "Juegas con: " << movimientoJugador << endl;
cout << "La maquina juega con: " << OponenteMovimiento << endl;
 
DeterminaGanador(nombreJugador, movimientoJugador, OponenteMovimiento);
 
cout << "Quieres volver a jugar? [s/n]";
cin>>res;
 
 
}while(toupper(res) == 'S');
if(toupper(res) == 'N'){
cout << "Termina el juego estos son tus resultados!" <<endl;
cin>>res;
 
}
 
 
 
}
 
if(eleccion==2){
 
do{
 
movimientoJugador = Usuario1();
OponenteMovimiento = Maquina1();
 
cout << "Juegas con: " << movimientoJugador << endl;
cout << "La maquina juega con: " << OponenteMovimiento << endl;
 
DeterminaGanador1(nombreJugador, movimientoJugador, OponenteMovimiento);
 
cout << "Quieres volver a jugar? [s/n]";
cin>>res;
 
 
}while(toupper(res) == 'S');
if(toupper(res) == 'N'){
cout << "Termina el juego estos son tus resultados!" <<endl;
cin>>res;
 
}
 
}
 
}
 
if(seleccion==2){
cout<<"Gracias por participar";
 
} else(cout<<"Opcion no valida");
 
 
}
