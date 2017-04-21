#include "Cola.h"
#include <string>
#include <iostream>

using namespace std;

int main() {

    Cola<int> cola;

    cola.acolar(3);
    cola.acolar(5);
    cola.acolar(1);
    cola.acolar(6);

    while (! cola.estaVacia()) {

        cout << cola.desacolar() << endl;
    }

    return 0;
}
