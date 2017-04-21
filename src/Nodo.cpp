#include "Nodo.h"

Nodo::Nodo(char dato) {

    this->dato = dato;
    this->siguiente = NULL;
}

char Nodo::obtenerDato() {

    return this->dato;
}

void Nodo::cambiarDato(char nuevoDato) {

    this->dato = nuevoDato;
}

Nodo* Nodo::obtenerSiguiente() {

    return this->siguiente;
}

void Nodo::cambiarSiguiente(Nodo* nuevoSiguiente) {

    this->siguiente = nuevoSiguiente;
}
