Algoritmos y Programaci�n 2 - FI UBA

# Estructura Din�mica de Datos: Cola

## Marco Te�rico

### Estructura de Datos

Una estructura de datos es una colecci�n de elementos cuya organizaci�n 
l�gica refleja una relaci�n entre ellos.
    
Se caracterizan por las operaciones de acceso que se utilizan para almacenar
y recuperar los elementos individuales.

### Estructura de Datos Est�tica

La estructura l�gica de los elementos que la componen permanece invariante 
a lo largo de toda su utilizaci�n. Ejemplo: Array

### Estructura de Datos Din�mica

La estructura l�gica de los elementos que la componen sufre modificaciones
a lo largo de su utilizaci�n. Ejemplos: Lista, Pila, Cola.

### Cola
    
Una Cola es una estructura din�mica de datos organizada de acuerdo al principio 
**FIFO** (*First In - First Out*)

El primer elemento en entrar es el primer elemento en salir.

S�lo permite el acceso al elemento que denomina frente.

### Operaciones

* Crear

* Esta vac�a?

* Acolar

* Desacolar

* Obtener el Frente

* Destruir

![Cola][cola]

## Enunciado
 
1. Dise�ar la interfaz del TDA Cola de Caracteres.

2. Desarrollar una implementaci�n *din�mica* del TDA Cola de Caracteres.    
 
3. Cambiar TDA Cola de Caracteres (interfaz e implementaci�n) por un tipo
parametrizable (*template*): `Cola<T>`.
 
4. Utilizar *excepciones* para manipular condiciones an�malas durante la 
utilizaci�n de `Cola<T>`. 
 
## Desarrollo

1. Definici�n de la interfaz de la clase `Cola`.

    * `Cola.h`: [Cola.h](../punto-01/src/Cola.h)

2. Implementaci�n de la clase `Cola` basada en nodos enlazados.

    * `Nodo.h`: [Nodo.h](../punto-02/src/Nodo.h)

    * `Nodo.cpp`: [Nodo.cpp](../punto-02/src/Nodo.cpp)

    * `Cola.h`: [Cola.h](../punto-02/src/Cola.h)

    * `Cola.cpp`: [Cola.cpp](../punto-02/src/Cola.cpp)

3. Implementaci�n del template `Cola<T>` basada en nodos enlazados.

    * `Nodo.h`: [Nodo.h](../punto-03/src/Nodo.h)

    * `Cola.h`: [Cola.h](../punto-03/src/Cola.h)
    
4. Implementaci�n del template `Cola<T>` basada en nodos enlazados, utilizando excepciones.

    * `Nodo.h`: [Nodo.h](../punto-04/src/Nodo.h)

    * `Cola.h`: [Cola.h](../punto-04/src/Cola.h)


[cola]: https://upload.wikimedia.org/wikipedia/commons/thumb/b/bb/Cola.svg/440px-Cola.svg.png "Cola"

    
