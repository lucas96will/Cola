#include "cola.h"
#include "nodo.h"
#include <stdlib.h>


/* Definición del struct cola proporcionado por la cátedra.
 */

struct cola {
    nodo_t* primero; // Apunta al primer Nodo de la Cola
    nodo_t* ultimo; // Apunta al ultimo Nodo de la Cola
};


/* *****************************************************************
 *                    PRIMITIVAS DE LA COLA
 * *****************************************************************/

cola_t *cola_crear(void){
    cola_t* nueva_cola = malloc(sizeof(cola_t));
    if(nueva_cola == NULL){
        return NULL;
    }
    nueva_cola->primero = NULL;
    nueva_cola->ultimo = NULL;
    return nueva_cola;
}


void cola_destruir(cola_t *cola, void (*destruir_dato)(void *)){
    /*Mientras la cola no esta vacia, aplico destruir_dato si es que no recibo NULL
     *y desencolo*/
    while(!cola_esta_vacia(cola)){
        if(destruir_dato != NULL){
            destruir_dato(cola_ver_primero(cola));
        }
        cola_desencolar(cola);
    }
    free(cola);
}


bool cola_esta_vacia(const cola_t *cola){
    return cola->primero == NULL;
}


bool cola_encolar(cola_t *cola, void *valor){
    nodo_t* nuevo_nodo = nodo_crear(valor);
    if(nuevo_nodo == NULL){
        return false;
    }

    /*Si la cola esta vacia el nuevo nodo es el primero
     *de otra manera enlazo el ultimo nodo con el nuevo nodo*/
    if(cola_esta_vacia(cola)){
        cola->primero = nuevo_nodo;
    } else {
        nodo_modificar_siguiente(cola->ultimo, nuevo_nodo);
    }
    /*El ultimo es el nuevo nodo (first in first out)*/
    cola->ultimo = nuevo_nodo;

    return true;
}

void *cola_ver_primero(const cola_t *cola){
    if(cola_esta_vacia(cola)){
        return NULL;
    }
    return  nodo_obtener_dato(cola->primero);
}

void *cola_desencolar(cola_t *cola){
    if(cola_esta_vacia(cola)){
        return NULL;
    }
    /*Obtengo el dato*/
    void* dato = cola_ver_primero(cola);

    /*first in first out*/
    nodo_t* nodo_eliminar = cola->primero;

    /*El primero ahora es el siguiente*/
    cola->primero = nodo_obtener_siguiente(cola->primero);

    /*Si la cola solo tenia un elemento el primero y ultimo son NULL*/
    if(cola->primero == NULL){
        cola->ultimo = NULL;
    }

    /*Ya no necesito el elemento que salio de la cola, solo su dato*/
    nodo_destruir(nodo_eliminar);

    return dato;
}
