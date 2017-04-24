
#include "gtest/gtest.h"
#include "Cola.h"

TEST( ColaCharTest, crear ) {

    Cola<char> cola;

    ASSERT_TRUE( cola.estaVacia() );
}

TEST( ColaCharTest, acolarUnUnicoElemento ) {

    Cola<char> cola;

    cola.acolar('D');

    ASSERT_FALSE( cola.estaVacia() );
}

TEST( ColaCharTest, acolarMultiplesElementos ) {

    Cola<char> cola;

    cola.acolar('O');
    cola.acolar('P');
    cola.acolar('Q');

    ASSERT_FALSE( cola.estaVacia() );
}

TEST( ColaCharTest, desacolarElUnicoElementoAcolado ) {

    Cola<char> cola;

    cola.acolar('S');
    const char elemento = cola.desacolar();

    ASSERT_TRUE( cola.estaVacia());
    ASSERT_EQ( 'S', elemento);
}

TEST( ColaCharTest, desacolaTresElementosCumpliendoFIFO ) {

    Cola<char> cola;

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

    Cola<char> cola;

    cola.acolar('X');
    cola.acolar('Y');
    cola.acolar('Z');

    ASSERT_FALSE( cola.estaVacia() );
    ASSERT_EQ( 'X', cola.obtenerFrente() );
}

TEST( ColaCharTest, obtenerFrenteNoModificaLaCola ) {

    Cola<char> cola;

    cola.acolar('X');

    ASSERT_FALSE( cola.estaVacia() );
    ASSERT_EQ( 'X', cola.obtenerFrente() );
    ASSERT_EQ( 'X', cola.obtenerFrente() );
    ASSERT_EQ( 'X', cola.obtenerFrente() );

    ASSERT_EQ( 'X', cola.desacolar() );
    ASSERT_TRUE( cola.estaVacia() );
}

TEST( ColaCharTest, desacolarConLaColaVaciaLanzaExcepcion ) {

    Cola<char> cola;

    ASSERT_THROW(cola.desacolar(), std::string) << "Cola vacía";
}

TEST( ColaCharTest, obtenerFrenteConLaColaVaciaLanzaExcepcion ) {

    Cola<char> cola;

    ASSERT_THROW(cola.obtenerFrente(), std::string) << "Cola vacía";
}
