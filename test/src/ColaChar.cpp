
#include "gtest/gtest.h"
#include "Cola.h"

/* hack/truco para poder correr las pruebas sin copiar los fuentes */
#include "Cola.cpp"
#include "Nodo.cpp"

TEST( ColaCharTest, crear ) {

    Cola cola;

    ASSERT_TRUE( cola.estaVacia() );
}

TEST( ColaCharTest, acolarUnUnicoElemento ) {

    Cola cola;

    cola.acolar('D');

    ASSERT_FALSE( cola.estaVacia() );
}

TEST( ColaCharTest, acolarMultiplesElementos ) {

    Cola cola;

    cola.acolar('O');
    cola.acolar('P');
    cola.acolar('Q');

    ASSERT_FALSE( cola.estaVacia() );
}

TEST( ColaCharTestcolaDeCaracteres, desacolarElUnicoElementoAcolado ) {

    Cola cola;

    cola.acolar('S');
    const char elemento = cola.desacolar();

    ASSERT_TRUE( cola.estaVacia());
    ASSERT_EQ( 'S', elemento);
}

TEST( ColaCharTest, desacolaTresElementosCumpliendoFIFO ) {

    Cola cola;

    cola.acolar('A');
    cola.acolar('B');
    cola.acolar('C');

    ASSERT_FALSE( cola.estaVacia() );
    ASSERT_EQ( 'A', cola.desacolar() );
    ASSERT_FALSE( cola.estaVacia() );
    ASSERT_EQ( 'B', cola.desacolar() );
    ASSERT_FALSE( cola.estaVacia() );
    ASSERT_EQ( 'C', cola.desacolar() );
    ASSERT_TRUE( cola.estaVacia() );
}

TEST( ColaCharTest, obtenerFrente ) {

    Cola cola;

    cola.acolar('X');
    cola.acolar('Y');
    cola.acolar('Z');

    ASSERT_FALSE( cola.estaVacia() );
    ASSERT_EQ( 'X', cola.obtenerFrente() );
}

TEST( ColaCharTest, obtenerFrenteNoModificaLaCola ) {

    Cola cola;

    cola.acolar('X');

    ASSERT_FALSE( cola.estaVacia() );
    ASSERT_EQ( 'X', cola.obtenerFrente() );
    ASSERT_EQ( 'X', cola.obtenerFrente() );
    ASSERT_EQ( 'X', cola.obtenerFrente() );

    ASSERT_EQ( 'X', cola.desacolar() );
    ASSERT_TRUE( cola.estaVacia() );
}


