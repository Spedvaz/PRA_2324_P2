
#include "DyV.h"


void tryInt(int valor){
	std::vector<int> a{0,1,2,3,4,5,6,7,8,9};
	int pos = BusquedaBinaria(valor, a, 0, 10);
	if(pos == -1){
		std::cout << "El valor " <<  valor << " no esta en la lista" << std::endl;
	}
	else{
		std::cout << "El valor " << valor << " esta en la posicion " << pos << std::endl;
	}
}

void tryFloat(float valor){
	std::vector<float> a{0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1};
	int pos = BusquedaBinaria(valor, a, 0, 10);
	if(pos == -1){
		std::cout << "El valor " <<  valor << " no esta en la lista" << std::endl;
	}
	else{
		std::cout << "El valor " << valor << " esta en la posicion " << pos << std::endl;
	}
}

void tryChar(char valor){
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
	int valorInt; std::cin >> valorInt;
	float valorFloat; std::cin >> valorFloat;
	char valorChar; std::cin >> valorChar;
	
	tryInt(valorInt);
	tryFloat(valorFloat);
	tryChar(valorChar);

	return 0;
}
