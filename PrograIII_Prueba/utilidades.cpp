#include "utilidades.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;

void UtilidadesListaEnlazada::insertarFinal(nodo **inicio, int valor)
{
	nodo * tmp = new nodo;
	tmp->valor = valor;
	if ((*inicio) == 0)
	{
		*inicio = tmp;
	}
	else
	{
		nodo *actual = *inicio;
		nodo *anterior = 0;
		while (actual != 0)
		{
			anterior = actual;
			actual = actual->sig;
		}
		anterior->sig = tmp;
		tmp->ant = anterior;
	}
}

nodo * UtilidadesListaEnlazada::crearLista(int cantidadNodos)
{
	srand((int)time(0));
	nodo *nuevo = 0;

	for (int i = 0; i < cantidadNodos; i++)
	{
		int numRand = (rand() % cantidadNodos) + 1;
		insertarFinal(&nuevo, numRand);
	}

	return nuevo;
}

void UtilidadesListaEnlazada::ordenarLista(nodo ** inicio)
{
	nodo *actual = *inicio;
	nodo *siguiente = actual->sig;
	int cont = 0;
	if (*inicio == NULL)
	{
		cout << "La lista está vacía.\n";
		return;
	}
	else
	{
		while (true)
		{
			if (siguiente == 0)
			{
				if (actual->valor > actual->ant->valor)
				{
					break;
				}
				actual = *inicio;
				siguiente = actual->sig;
			}

			if (actual->valor > siguiente->valor)
			{
				int i1 = siguiente->valor;
				int i2 = actual->valor;
				actual->valor = i1;
				siguiente->valor = i2;
			}
			actual = siguiente;
			siguiente = siguiente->sig;
		}
	}
}

void UtilidadesListaEnlazada::guardarLista(nodo ** inicio, char * nombreArchivo)
{

}

void UtilidadesListaEnlazada::imprimirLista(nodo ** Lista)
{
	nodo *actual = *Lista;
	while (actual != NULL)
	{
		cout << actual->valor << ' ';
		actual = actual->sig;
	}
}