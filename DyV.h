#include <vector>
#include <iostream>
template <typename T>

int BusquedaBinaria(T X, std::vector<T>& V, int ini, int fin){
	if(ini > fin){
		return -1;
	}
	int medio = (ini + fin) / 2;
	if(V[medio] == X){
		return medio;
	}else if(V[medio] > X){
		return BusquedaBinaria(X, V, ini, medio - 1);
	}else{
		return BusquedaBinaria(X, V, medio + 1, fin);
	}
}
template <typename T>

void QuickSort(std::vector<T> &V, int ini, int fin){
	if(ini < fin){
		int pivot = Partition(V, ini, fin);
		QuickSort(V, ini, pivot - 1);
		QuickSort(V, pivot + 1, fin);
	}
}
template <typename T>

int Partition(std::vector<T> &V, int ini, int fin){
	T x = V[fin];
	int i = ini;
	for(int j = ini; j < fin - 1;j++){
		if(V[j] <= x){
			int aux = V[j];
			V[j] = V[i];
			V[i] = aux;
			i = i + 1;
		}
	} 
	int aux = V[i];
	V[i] = V[fin];
	V[fin] = aux;
	return i;
}
