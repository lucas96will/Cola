#ifndef COLA_NODO_H
#define COLA_NODO_H

#include <stdbool.h>

/* ******************************************************************
 *                DEFINICION DE LOS TIPOS DE DATOS
 * *****************************************************************/
/* El nodo está planteado de forma que almacena un dato y un puntero al siguiente nodo. */

struct nodo;
typedef struct nodo nodo_t;

/* ******************************************************************
 *                    PRIMITIVAS DEL NODO
 * *****************************************************************/

// Crea un nodo con el dato
// Post: devuelve un nodo con el dato almacenado.
nodo_t* nodo_crear(void* dato);

// Destruye el nodo.
// Pre: El nodo fue creado
// Post: se eliminaron todos los elementos del nodo y el siguiente
// nodo al que apunta es NULL.
void nodo_destruir(nodo_t* nodo);

// Obtiene el dato almacenado en el nodo
// Pre: el nodo fue creado.
// Post: se devuelve el dato almacenado en el nodo
void* nodo_obtener_dato(nodo_t* nodo);

// Obtiene el siguiente nodo
// Pre: el nodo fue creado
// Post: devuelve el siguiente nodo si existe, NULL en otro caso
nodo_t* nodo_obtener_siguiente(nodo_t* nodo);

// Modifica el puntero del nodo por el siguiente
// Pre: el nodo fue creado
// Post: el siguiente del nodo es modificado a nuevo_siguiente
void nodo_modificar_siguiente(nodo_t* nodo, nodo_t* nuevo_siguiente);

#endif //COLA_NODO_H
