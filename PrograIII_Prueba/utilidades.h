#ifndef UTILIDADES_H
#define UTILIDADES_H

struct nodo
{
	nodo()
	{
		this->ant = 0;
		this->sig = 0;
	}
	int valor;
	nodo *sig;
	nodo *ant;
};

class UtilidadesListaEnlazada
{
public:
	static void insertarFinal(nodo **, int);
	static nodo * crearLista(int);
	static void ordenarLista(nodo **);
	static void guardarLista(nodo **, char *);
	static void imprimirLista(nodo **);
};



#endif // !UTILIDADES_H

