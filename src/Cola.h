#ifndef COLA_H_
#define COLA_H_

#include "Nodo.h"

/*
 * Una Cola es una estructura dinámica de datos organizada de acuerdo al
 * principio FIFO (First In - First Out).
 *
 * El primer elemento en entrar es el primer elemento en salir.
 *
 * Sólo permite el acceso al elemento que denomina frente.
 *
 */
class Cola {

	private:

        Nodo* frente;

        Nodo* fondo;

    public:

        /*
         * post: instancia de Cola vacía y lista para ser usada.
         */
        Cola();

        /*
         * post: devuelve si la Cola no tiene ningún elemento.
         */
        bool estaVacia();

        /*
         * post: agrega 'elemento' en el fondo de la Cola.
         */
        void acolar(char elemento);

        /*
         * pre : la Cola no está vacía.
         * post: remueve el frente de la Cola y lo devuelve.
         */
        char desacolar();

        /*
         * pre : la Cola no está vacía.
         * post: devuelve el frente de la Cola.
         */
        char obtenerFrente();

        /*
         * post: remueve todos los elementos y libera
         *       los recursos tomados por la estructura de datos.
         */
        ~Cola();
};



#endif /* COLA_H_ */
