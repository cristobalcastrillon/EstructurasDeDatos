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
    g.insertaArista(2, 0);
    g.insertaArista(2, 3);
    g.insertaArista(3, 3);

    bool conexo = g.esConexo();
    cout << conexo << endl;
    return 0; 
}