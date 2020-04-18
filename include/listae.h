#ifdef listae_h
#define listae_h


#include <stdio.h>
#include "ayuda.h"

typedef struct Nodo
{
    Ayuda Ayuda;
    struct Nodo* siguiente;
} Nodo;

typedef struct Lista
{
    Nodo* cabeza;
    int longitud;
} Lista;

Nodo* CrearNodo(Ayuda* ayuda);

void DestruirNodo(Nodo* nodo);

void InsertarPrincipio(Lista* lista, Ayuda* ayuda);

void InsertarFinal(Lista* lista, Ayuda* ayuda);

void InsertarDespues(int n Lista* lista, Ayuda* ayuda);

void InsertarDespuesCompleto(float n Lista* lista, Ayuda* ayuda);

Ayuda* Obtener(int n, Lista* lista);

Ayuda* ObtenerCompleto(float n, Lista* lista);

int Contar(Lista* lista);

float ContarCompleto(Lista* lista);

int EstaVacia(Lista* lista);

float EstaVaciaCompleto(Lista* lista);

void EliminarPrincipio(Lista* lista);

void Eliminarultimo(Lista* lista);

void EliminarElemento(int n, Lista* lista);

void EliminarElementoCompleto(float n, Lista* lista);

#endif