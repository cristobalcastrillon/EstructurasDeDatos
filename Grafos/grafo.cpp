#include "grafo.h"
#include <math.h>
//Constructor, inicializa el arreglo de listas enlazadas
Grafo::Grafo(int V)
{
    this->V = V;
    listaAdy = new list<int>[V];
}
// La lista de adyacencia es un contenedor de la STL // push_back agrega un elemento al final de la lista // Tambi ́en se puede usar Vector
void Grafo::insertaArista(int v, int w)
{
    // agrega vertice w a la lista de vertices adyacentes a v y viceversa (grafo no dirigido)
    listaAdy[v].push_back(w);
    listaAdy[w].push_back(v);
}

bool Grafo::esConexo(){
    bool esConexo = false;
    int sumaAdyacencia = 0;
    int i;
    for(i = 0 ; i < V; i++){
        if(listaAdy[i].size() == 0)
            break;
    }
    if(V == i)
        esConexo = true;
    return esConexo;
}

bool Grafo::caminoEuler(){
    bool euler = false;
    if(this.esConexo()){
        
    }
    return euler;
}