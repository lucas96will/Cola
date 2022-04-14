#include "nodo.h"
#include <stdlib.h>

/* Definicion del struct nodo */

struct nodo {
    void* dato;
    nodo_t* siguiente;
};

/* ******************************************************************
 *                    PRIMITIVAS DEL NODO
 * *****************************************************************/

nodo_t* nodo_crear(void* dato){
    nodo_t* nodo = malloc(sizeof(nodo_t));
    if(nodo == NULL){
        return NULL;
    }
    nodo -> dato = dato;
    nodo -> siguiente = NULL;

    return nodo;
}

void nodo_destruir(nodo_t* nodo){
    nodo->siguiente = NULL;
    free(nodo);
}

void* nodo_obtener_dato(nodo_t* nodo){
    return nodo -> dato;
}

nodo_t* nodo_obtener_siguiente(nodo_t* nodo){
    return nodo -> siguiente;
}

void nodo_modificar_siguiente(nodo_t* nodo, nodo_t* nuevo_siguiente){
    nodo -> siguiente = nuevo_siguiente;
}


