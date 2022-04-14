#include "cola.h"
#include "testing.h"
#include <stdio.h>

#define TAM_PRUEBA 5

static void prueba_cola_crear(void){
    cola_t* cola = cola_crear();

    printf("\nINICIO DE PRUEBAS DE CREAR COLA \n");
    print_test("La cola fue creada correctamente", cola != NULL);

    cola_destruir(cola, NULL);
}

static void prueba_cola_vacia(void){
    cola_t* cola = cola_crear();

    printf("\nINICIO DE PRUEBAS DE COLA VACIA\n");
    print_test("La cola fue creada y se encuentra vacia", cola_esta_vacia(cola));
    print_test("La cola fue creada y desacolar devuelve NULL", cola_desencolar(cola) == NULL);
    print_test("Ver el primero en la cola vacia es NULL", cola_ver_primero(cola) == NULL);

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

    cola_destruir(cola, NULL);
}


void pruebas_cola_estudiante() {
    prueba_cola_crear();
    prueba_cola_vacia();
    prueba_cola_encolar();
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
