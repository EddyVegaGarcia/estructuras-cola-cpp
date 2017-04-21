#include "Cola.h"

#define ELEMENTO_INVALIDO 0;

Cola::Cola() {

    this->frente = NULL;
    this->fondo = NULL;
}

bool Cola::estaVacia() {

    return (this->frente == NULL);
}

void Cola::acolar(char elemento) {

    Nodo* nuevoFondo = new Nodo(elemento);
    this->fondo->cambiarSiguiente(nuevoFondo);
    this->fondo = nuevoFondo;
}

char Cola::desacolar() {

    char elemento = ELEMENTO_INVALIDO;

    if (! this->estaVacia()) {

        /* remueve el frente de la estructura */
        Nodo* frenteAnterior = this->frente;
        this->frente = frenteAnterior->obtenerSiguiente();

        /* devuelve el elemento y libera los recursos asociados */
        elemento = frenteAnterior->obtenerDato();
        delete frenteAnterior;
    }

    return elemento;
}

char Cola::obtenerFrente() {

    char elemento = ELEMENTO_INVALIDO;

    if (! this->estaVacia()) {

        elemento = this->frente->obtenerDato();
    }

    return elemento;
}

Cola::~Cola() {

    while (! this->estaVacia()) {

        this->desacolar();
    }
}
