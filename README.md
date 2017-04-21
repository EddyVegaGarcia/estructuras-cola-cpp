Algoritmos y Programación 2 - FI UBA

# Estructura Dinámica de Datos: Cola

## Marco Teórico

### Estructura de Datos

Una estructura de datos es una colección de elementos cuya organización 
lógica refleja una relación entre ellos.
    
Se caracterizan por las operaciones de acceso que se utilizan para almacenar
y recuperar los elementos individuales.

### Estructura de Datos Estática

La estructura lógica de los elementos que la componen permanece invariante 
a lo largo de toda su utilización. Ejemplo: Array

### Estructura de Datos Dinámica

La estructura lógica de los elementos que la componen sufre modificaciones
a lo largo de su utilización. Ejemplos: Lista, Pila, Cola.

### Cola
    
Una Cola es una estructura dinámica de datos organizada de acuerdo al principio 
**FIFO** (*First In - First Out*)

El primer elemento en entrar es el primer elemento en salir.

Sólo permite el acceso al elemento que denomina frente.

### Operaciones

* Crear

* Esta vací­a?

* Acolar

* Desacolar

* Obtener el Frente

* Destruir

![Cola][cola]

## Enunciado
 
1. Diseñar la interfaz del TDA Cola de Caracteres.

2. Desarrollar una implementación *dinámica* del TDA Cola de Caracteres.    
 
3. Cambiar TDA Cola de Caracteres (interfaz e implementación) por un tipo
parametrizable (*template*): `Cola<T>`.
 
4. Utilizar *excepciones* para manipular condiciones anómalas durante la 
utilización de `Cola<T>`. 
 
## Desarrollo

1. Definición de la interfaz de la clase `Cola`.

    * `Cola.h`: [Cola.h](../punto-01/src/Cola.h)

2. Implementación de la clase `Cola` basada en nodos enlazados.

    * `Nodo.h`: [Nodo.h](../punto-02/src/Nodo.h)

    * `Nodo.cpp`: [Nodo.cpp](../punto-02/src/Nodo.cpp)

    * `Cola.h`: [Cola.h](../punto-02/src/Cola.h)

    * `Cola.cpp`: [Cola.cpp](../punto-02/src/Cola.cpp)

3. Implementación del template `Cola<T>` basada en nodos enlazados.

    * `Nodo.h`: [Nodo.h](../punto-03/src/Nodo.h)

    * `Cola.h`: [Cola.h](../punto-03/src/Cola.h)
    
4. Implementación del template `Cola<T>` basada en nodos enlazados, utilizando excepciones.

    * `Nodo.h`: [Nodo.h](../punto-04/src/Nodo.h)

    * `Cola.h`: [Cola.h](../punto-04/src/Cola.h)


[cola]: https://upload.wikimedia.org/wikipedia/commons/thumb/b/bb/Cola.svg/440px-Cola.svg.png "Cola"

    
