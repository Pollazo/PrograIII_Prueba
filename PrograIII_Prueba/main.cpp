#include "utilidades.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	nodo *lista;

	lista = UtilidadesListaEnlazada::crearLista(5);

	UtilidadesListaEnlazada::imprimirLista(&lista);

	cout << endl;

	UtilidadesListaEnlazada::ordenarLista(&lista);

	UtilidadesListaEnlazada::imprimirLista(&lista);
	
	_getch();

	return 0;
}