
#include "gtest/gtest.h"
#include "Cola.h"

TEST( ColaIntTest, crear ) {

    Cola<int> cola;

    ASSERT_TRUE( cola.estaVacia() );
}

TEST( ColaIntTest, acolarUnUnicoElemento ) {

    Cola<int> cola;

    cola.acolar(4);

    ASSERT_FALSE( cola.estaVacia() );
}

TEST( ColaIntTest, acolarMultiplesElementos ) {

    Cola<int> cola;

    cola.acolar(5);
    cola.acolar(6);
    cola.acolar(7);

    ASSERT_FALSE( cola.estaVacia() );
}

TEST( ColaIntTest, desacolarElUnicoElementoAcolado ) {

    Cola<int> cola;

    cola.acolar(56);
    const int elemento = cola.desacolar();

    ASSERT_TRUE( cola.estaVacia());
    ASSERT_EQ( 56, elemento);
}

TEST( ColaIntTest, desacolaTresElementosCumpliendoFIFO ) {

    Cola<int> cola;

    cola.acolar(1);
    cola.acolar(2);
    cola.acolar(3);

    ASSERT_FALSE( cola.estaVacia() );
    ASSERT_EQ( 1, cola.desacolar() );
    ASSERT_FALSE( cola.estaVacia() );
    ASSERT_EQ( 2, cola.desacolar() );
    ASSERT_FALSE( cola.estaVacia() );
    ASSERT_EQ( 3, cola.desacolar() );
    ASSERT_TRUE( cola.estaVacia() );
}

TEST( ColaIntTest, obtenerFrente ) {

    Cola<int> cola;

    cola.acolar(12);
    cola.acolar(14);
    cola.acolar(16);

    ASSERT_FALSE( cola.estaVacia() );
    ASSERT_EQ( 12, cola.obtenerFrente() );
}

TEST( ColaIntTest, obtenerTopeNoModificaLaCola ) {

    Cola<int> cola;

    cola.acolar(23);

    ASSERT_FALSE( cola.estaVacia() );
    ASSERT_EQ( 23, cola.obtenerFrente() );
    ASSERT_EQ( 23, cola.obtenerFrente() );
    ASSERT_EQ( 23, cola.obtenerFrente() );

    ASSERT_EQ( 23, cola.desacolar() );
    ASSERT_TRUE( cola.estaVacia() );
}

