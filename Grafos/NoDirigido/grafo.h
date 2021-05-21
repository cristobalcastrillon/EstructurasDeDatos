#include <iostream>
#include <list>
using namespace std;
// Un grafo representado con lista de adyacencia
struct Grafo
{
    int V; // numero de v ́ertices
    // Lista de adyacencia como un arreglo de v ́ertices 
    list<int> * listaAdy;
    Grafo(int V);   // Constructor
    // funcion para insertar una arista al grafo
    void insertaArista(int v, int w);
    bool esConexo();
    bool caminoEuler();
    bool circuitoEuler();
};