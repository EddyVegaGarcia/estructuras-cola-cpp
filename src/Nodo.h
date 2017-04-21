#ifndef NODO_H_
#define NODO_H_

#ifndef NULL
#define NULL 0
#endif

class Nodo {

    private:

        char dato;

        Nodo* siguiente;

    public:

        /*
         * post: el Nodo resulta inicializado con el dato dado
         *       y sin un Nodo siguiente.
         */
        Nodo(char dato);
        /*
         * post: devuelve el valor del dato.
         */
        char obtenerDato();
        /*
         * post: cambia el valor del dato.
         */
        void cambiarDato(char nuevoDato);
        /*
         * post: devuelve el siguiente Nodo.
         */
        Nodo* obtenerSiguiente();
        /*
         * post: cambia el siguiente Nodo por nuevoSiguiente.
         */
        void cambiarSiguiente(Nodo* nuevoSiguiente);
};


#endif /* NODO_H_ */
