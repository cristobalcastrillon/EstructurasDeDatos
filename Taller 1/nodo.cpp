//
//  nodo.cpp
//  TallerListas
//
//  Created by Cristóbal Castrillón Balcázar on 11/02/21.
//

#include <iostream>

using namespace std;

// Nodo para una lista enlazada simple
template <typename N> struct Nodo {
  public:
    
    N elemento; // Elemento que representa este nodo
    Nodo *siguiente; // Apuntador al siguiente nodo de la lista
    
    // Constructores
    Nodo(const N& valorElemento, Nodo* siguienteNodo = NULL) {
        elemento = valorElemento;
        siguiente = siguienteNodo; }
    
    Nodo(Nodo* siguienteNodo = NULL) {
      siguiente = siguienteNodo; }
};
