#include <vector>
#include <iostream>
template <typename T>
int busqueda_binaria(T X, std::vector<T>& V, int ini, int fin){
	if(ini > fin){
		std::cout << "No se encuentra el array" << std::endl;	
		return -1;
	}
	
	int medio = (ini+fin)/2;

	if(V[medio] == X){
		return medio;
	}
	else if(V[medio] > X){
		return busqueda_binaria(X, V, medio+1, fin);
	}
	else{
		return busqueda_binaria(X, V, ini, medio-1);
	}
}
