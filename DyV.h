template <typename valor>

valor BusquedaBinaria(val x, std::vector<valor> V, int ini, int fin){
	if(ini > fin){
		std::cout << "No se encuentra el array" << endl;
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
