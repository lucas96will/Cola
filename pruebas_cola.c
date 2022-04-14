#include "cola.h"
#include "testing.h"
#include <stdio.h>
#include <stdlib.h>

#define TAM_PRUEBA 5
#define TAM_VOLUMEN 10

static void prueba_cola_crear(void){
    cola_t* cola = cola_crear();

    printf("\nINICIO DE PRUEBAS DE CREAR COLA \n");
    print_test("La cola fue creada correctamente", cola != NULL);
    print_test("Ver el primero en la cola creada es NULL", cola_ver_primero(cola) == NULL);
    print_test("La cola fue creada y desacolar devuelve NULL", cola_desencolar(cola) == NULL);


    cola_destruir(cola, NULL);
}

static void prueba_cola_vacia(void){
    cola_t* cola = cola_crear();

    printf("\nINICIO DE PRUEBAS DE COLA VACIA\n");
    print_test("La cola fue creada y se encuentra vacia", cola_esta_vacia(cola));
    print_test("La cola fue creada y desacolar devuelve NULL", cola_desencolar(cola) == NULL);

    /*Encolo algunos elementos, los desencolo y pruebo si la cola esta vacia*/
    int vec[TAM_PRUEBA] = { 10, 20, 30, 40, 50 };
    for(int i = 0; i < TAM_PRUEBA; i++){
        cola_encolar(cola, &vec[i]);
    }

    print_test("La cola con elementos no se encuentra vacia", !cola_esta_vacia(cola));

    while(!cola_esta_vacia(cola)){
        cola_desencolar(cola);
    }
    print_test("La cola desencolada esta vacia", cola_esta_vacia(cola));
    print_test("La cola al desencolar estando vacia devuelve NULL", cola_desencolar(cola) == NULL);
    print_test("Ver el primero en la cola vacia es NULL", cola_ver_primero(cola) == NULL);


    /*Encolo y desencolo nuevamente para probar si funciona correctamente*/
    for(int i = 0; i < TAM_PRUEBA; i++){
        cola_encolar(cola, &vec[i]);
    }

    print_test("La cola con elementos nuevamente no se encuentra vacia", !cola_esta_vacia(cola));

    while(!cola_esta_vacia(cola)){
        cola_desencolar(cola);
    }

    print_test("La cola desencolada nuevamente esta vacia", cola_esta_vacia(cola));
    print_test("La cola al desencolar estando nuevamente vacia devuelve NULL", cola_desencolar(cola) == NULL);
    print_test("Ver el primero en la cola vacia es NULL", cola_ver_primero(cola) == NULL);


    cola_destruir(cola, NULL);
}

static void prueba_cola_encolar(){
    cola_t* cola = cola_crear();
    printf("\nINICIO DE PRUEBAS DE ENCOLAR\n");
    int vec[TAM_PRUEBA] = { 5, 10, 15, 20, 25 };
    int* num;
    /*Encolo el 5*/
    cola_encolar(cola, &vec[0]);

    /*Pruebo si el primero en la cola es el 5*/
    num =  cola_ver_primero(cola);
    print_test("El primero en la cola es el 5", vec[0] == *num);

    /*Encolo el 10*/
    cola_encolar(cola, &vec[1]);

    /*Pruebo si el primero en la cola es el 10*/
    num =  cola_ver_primero(cola);
    print_test("Acolo el 10 y el primero en la cola sigue siendo el 5", vec[0] == *num);

    cola_desencolar(cola);
    num =  cola_ver_primero(cola);
    print_test("Desencolo el 5 y el primero en la cola es el 10", vec[1] == *num);

    cola_desencolar(cola);
    print_test("Desencolo el 10 y la cola se encuentra vacia", cola_esta_vacia(cola));

    /*Encolo el valor NULL*/
    cola_encolar(cola, NULL);

    print_test("Al encolar el valor NULL la cola no se encuentra vacia", !cola_esta_vacia(cola));

    /*Desencolo el NULL*/
    num = cola_desencolar(cola);

    print_test("Desencolar NULL devuelve NULL", num == NULL);

    cola_destruir(cola, NULL);
}

static void prueba_cola_desencolar(void){
    cola_t* cola = cola_crear();
    printf("\nINICIO DE PRUEBAS DE DESENCOLAR\n");

    /*Desacolar una cola recien creada es NULL*/
    print_test("Desencolar cola recien creada devuelve NULL", cola_desencolar(cola) == NULL);

    /*Encolo algunos elementos*/
    int vec[TAM_PRUEBA] = { 5, 10, 15, 20, 25 };
    int* num;
    for(int i = 0; i < TAM_PRUEBA; i++){
        cola_encolar(cola, &vec[i]);
    }

    /*Desencolo los elementos*/
    bool invariante = true;
    for(int i = 0; i < TAM_PRUEBA; i++){
        num = cola_desencolar(cola);
        invariante &= (*num == vec[i]);
        /*Compruebo que el primero en llegar a la cola es el primero en irse*/
        printf("Desencolo el %d", vec[i]);
        print_test(" ", *num == vec[i]);
    }
    /*Invariante FIFO*/
    print_test("Invariante de la cola", invariante);

    /*Pruebo que desacolar una cola vacia devuelve un null*/
    print_test("Desacolar cola vacia devuelve NULL", cola_desencolar(cola) == NULL);


    cola_destruir(cola, NULL);
}

void f_destruir_wrapper(void* dato){
    cola_destruir(dato, NULL);
}

static void prueba_cola_funcion(){
    int* vec = malloc(TAM_PRUEBA*sizeof(int));
    cola_t* cola = cola_crear();

    for(int i = 0; i< TAM_PRUEBA; i++){
        vec[i] = i+1;
    }
    /*Encolo el primer elemento del vector*/
    cola_encolar(cola, &vec[0]);

    /*Aplico destruir cola con free (esto implica que no debo hacer free de mi vector)*/
    /*Esto funciona si valgrind no da error y si la cola solo tiene el primer elemento del vectorr*/
    cola_destruir(cola, free);


    cola_t* cola2 = cola_crear();
    cola_t* cola_random = cola_crear();
    /*Encolo en cola2, cola_random*/
    cola_encolar(cola2, cola_random);

    /*Llamo al destructor de cola2 pasandole una funcion que llame al destructor de la cola_random*/
    cola_destruir(cola2, f_destruir_wrapper);
}

static void prueba_cola_volumen(void){
    int* vec = malloc(TAM_VOLUMEN*sizeof(int));
    cola_t* cola = cola_crear();

    /*Encolo comprobando en cada paso que se cumpla el invariante FIFO*/
    bool invariante = true;
    int* primero;
    for(int i = 0; i < TAM_VOLUMEN; i++){
        vec[i] = i;
        cola_encolar(cola, &vec[i]);
        primero = cola_ver_primero(cola);
        invariante &= (vec[0] == *primero);
    }
    print_test("Invariante de la cola al encolar", invariante);

    /*Desencolo comprobando en cada paso que se cumpla el invariante FIFO*/
    while(!cola_esta_vacia(cola)){
        primero = cola_ver_primero(cola);
        invariante &= (*primero == vec[*primero]);
        invariante &= (primero == cola_desencolar(cola));
    }
    print_test("Invariante de la cola al desencolar", invariante);

    free(vec);
    cola_destruir(cola, NULL);
}

void pruebas_cola_estudiante() {
    prueba_cola_crear();
    prueba_cola_vacia();
    prueba_cola_encolar();
    prueba_cola_desencolar();
    prueba_cola_funcion();
    prueba_cola_volumen();
}

/*
 * Función main() que llama a la función de pruebas.
 */

#ifndef CORRECTOR  // Para que no dé conflicto con el main() del corrector.

int main(void) {
    pruebas_cola_estudiante();
    return failure_count() > 0;  // Indica si falló alguna prueba.
}

#endif
