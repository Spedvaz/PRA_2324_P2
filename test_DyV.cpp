
#include "DyV.h"


void PruebaInt(int valor){
	std::vector<int> a{0,1,2,3,4,5,6,7,8,9};
	int pos = BusquedaBinaria(valor, a, 0, 10);
	if(pos == -1){
		std::cout << "El valor " <<  valor << " no esta en la lista" << std::endl;
	}
	else{
		std::cout << "El valor " << valor << " esta en la posicion " << pos << std::endl;
	}
}

void PruebaFloat(float valor){
	std::vector<float> a{0.1,1.4,2.5,3.1,4.8,5.0,6.2,7.1,8.7,9.6};
	int pos = BusquedaBinaria(valor, a, 0, 10);
	if(pos == -1){
		std::cout << "El valor " <<  valor << " no esta en la lista" << std::endl;
	}
	else{
		std::cout << "El valor " << valor << " esta en la posicion " << pos << std::endl;
	}
}

void PruebaChar(char valor){
	std::vector<char> a{'A','B','C','D','E','a','b','c','d','e'};
	int pos = BusquedaBinaria(valor, a, 0, 10);
	if(pos == -1){
		std::cout << "El valor " <<  valor << " no esta en la lista" << std::endl;
	}
	else{
		std::cout << "El valor " << valor << " esta en la posicion " << pos << std::endl;
	}
}
	
int main(){
	int ValorInt; 
	std::cout << "Introduce un valor entero para realizar la busqueda binaria: " << ' ';
	std::cin >> ValorInt;
	float ValorFloat; 
	std::cout << "Introduce un valor flotante para realizar la busqueda binaria: "<<' ';
	std::cin >> ValorFloat;
	char ValorChar; 
	std::cout << "Introduce un carácter para realizar la busqueda binaria: "<<' ';;
	std::cin >> ValorChar;
	
	PruebaInt(ValorInt);
	PruebaFloat(ValorFloat);
	PruebaChar(ValorChar);

	return 0;
}
