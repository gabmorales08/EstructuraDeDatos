#include "lista_generica.hpp"
#include <string>
//Gabriela Estefany Morales Alas MA101714
template <typename TIPODATO>
class Pila : private Lista<TIPODATO>{
	public:
		Pila();
		push(TIPODATO item);
		TIPODATO pop();
		bool estaPilaVacia();
		string pilaComoCadena();
};

template<typename TIPODATO>
Pila<TIPODATO>::Pila(){
	Lista<TIPODATO> Lista;
}

template<typename TIPODATO>
Pila<TIPODATO>::push(TIPODATO item){
	this->adjuntar(item);
}

template<typename TIPODATO>
TIPODATO Pila<TIPODATO>::pop(){
	return this->remover(this->tamano() - 1);
}

template<typename TIPODATO>
bool Pila<TIPODATO>::estaPilaVacia{
	return this->estaVacia();
}

template<typename TIPODATO>
string Pila<TIPODATO>::pilaComoCadena{
	return this->comoCadena()
}
