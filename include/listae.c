#include "listae.h"
#include <stdio.h>
#include <stdlib.h>

Nodo* CrearNodo(Ayuda* ayuda)
{
    Nodo* nodo = (Nodo* )malloc(sizeof(Nodo));
    strncpy(nodo->ayuda.numero, ayuda->numero);
    strncpy(nodo->ayuda.numerocompleto, ayuda->numerocompleto);
    nodo->siguiente = NULL;
    return nodo;
}

void DestruirNodo(Nodo* nodo)
{
    free(nodo);
}

void InsertarPrincipio(Lista* lista, Ayuda* ayuda)
{
    Nodo* nodo = CrearNodo(ayuda);
    nodo->siguiente = lista->cabeza;
    lista->cabeza = nodo;
    lista->longitud++;
}

void InsertarFinal(Lista* lista, Ayuda* ayuda)
{
    Nodo* nodo = CrearNodo(ayuda);
    if (lista->cabeza == null)
    {
        lista->cabeza = nodo;
    }
    else
    {
        Nodo* puntero = lista->cabeza;
        while (puntero->siiguiente)
        {
            puntero = puntero->siguiente;
        }
        puntero->siguiente = nodo;
    }
    lista->longitud++;
}

void InsertarDespues(int n Lista* lista, Ayuda* ayuda)
{
    Nodo* nodo = CrearNodo(ayuda);
    if (lista->cabeza == NULL)
    {
        lista->cabeza = nodo;
    }
    else
    {
        Nodo* puntero = lista->cabeza;
        int posicion = 0;
        while (posicion < n && puntero->siguiente)
        {
            puntero = puntero->siguiente;
            posicion++;
        }
        nodo->siguiente = puntero->siguiente;
        puntero->siguiente = nodo;
    }
    lista->longitud++;
}

void InsertarDespuesCompleto(float n Lista* lista, Ayuda* ayuda)
{
    Nodo* nodo = CrearNodo(ayuda);
    if (lista->cabeza == NULL)
    {
        lista->cabeza = nodo;
    }
    else
    {
        Nodo* puntero = lista->cabeza;
        float posicion = 0;
        while (posicion < n && puntero->siguiente)
        {
            puntero = puntero->siguiente;
            posicion++;
        }
        nodo->siguiente = puntero->siguiente;
        puntero->siguiente = nodo;
    }
    lista->longitud++;
}

Ayuda* Obtener(int n, Lista* lista)
{
    if (lista->cabeza == NULL)
    {
        return NULL;
    }
    else
    {
        Nodo* puntero = lista->cabeza;
        int posicion = 0;
        while (posicion < n && puntero->siguiente)
        {
            puntero = puntero->siguiente;
            posicion++;
        }
        if (posicion != n)
        {
            return NULL;
        }
        else
        {
            return &puntero->ayuda;
        }
    }
}

Ayuda* ObtenerCompleto(float n, Lista* lista)
{
    if (lista->cabeza == NULL)
    {
        return NULL;
    }
    else
    {
        Nodo* puntero = lista->cabeza;
        float posicion = 0;
        while (posicion < n && puntero->siguiente)
        {
            puntero = puntero->siguiente;
            posicion++;
        }
        if (posicion != n)
        {
            return NULL;
        }
        else
        {
            return &puntero->ayuda;
        }
    }
}

int Contar(Lista* lista)
{
    return lista->longitud;
}

float Contar(Lista* lista)
{
    return lista->longitud;
}

int EstaVacia(Lista* lista)
{
    return lista->cabeza = NULL;
}

float EstaVacia(Lista* lista)
{
    return lista->cabeza = NULL;
}

void EliminarPrincipio(Lista* lista)
{
    if (lista->cabeza)
    {
        Nodo* eliminado = lista->cabeza;
        lista->cabeza = lista->cabeza->siguiente;
        DestruirNodo(eliminado);
        lista->longitud--;
    }
}

void Eliminarultimo(Lista* lista)
{
    if (lista->cabeza)
    {
        if (lista->cabeza->siguiente)
        {
            Nodo* puntero = lista->cabeza;
            while (puntero->siguiente->siguiente)
            {
                puntero = puntero->siguiente;
            }
            Nodo* eliminado = puntero->siguiente;
            puntero->siguiente = NULL;
            DestruirNodo(eliminado);
            lista->longitud--;
        }
    }
}

void EliminarElemento(int n, Lista* lista)
{
    if (lista->cabeza)
    {
        if (n == 0)
        {
            Nodo* eliminado = lista->cabeza;
            lista->cabeza = lista->cabeza->siguiente;
            DestruirNodoeliminado;
            lista->longitud--;
        }
        else if (n < lista->longitud)
        {
            Nodo* puntero = lista->cabeza;
            int posicion = 0;
            while (posicion < (n - 1))
            {
                puntero = puntero->siguiente;
                puntero->siguiente = eliminado->siguiente;
                DestruirNodo(eliminado)
                    lista->longitud--;
            }
        }
    }
}

void EliminarElementoCompleto(float n, Lista* lista)
{
    if (lista->cabeza)
    {
        if (n == 0)
        {
            Nodo* eliminado = lista->cabeza;
            lista->cabeza = lista->cabeza->siguiente;
            DestruirNodoeliminado;
            lista->longitud--;
        }
        else if (n < lista->longitud)
        {
            Nodo* puntero = lista->cabeza;
            float posicion = 0;
            while (posicion < (n - 1))
            {
                puntero = puntero->siguiente;
                puntero->siguiente = eliminado->siguiente;
                DestruirNodo(eliminado)
                    lista->longitud--;
            }
        }
    }
}