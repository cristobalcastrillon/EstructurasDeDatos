#include <iostream>
using namespace std;
#include "grafo.h"
int main() {
    // Crea el grafo
    Grafo g(4);
    //Inserta cinco aristas
    g.insertaArista(0, 1);
    g.insertaArista(0, 2); 
    g.insertaArista(1, 2);
    g.insertaArista(2, 3);
    g.insertaArista(3, 3);

    cout << "Conexo: " << g.esConexo() << endl;
    cout << "Camino de Euler: " << g.caminoEuler() << endl;
    cout << "Circuito de Euler: " << g.circuitoEuler() << endl;

    return 0; 
}