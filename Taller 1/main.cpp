//
//  main.cpp
//  TallerListas
//
//  Created by Cristóbal Castrillón Balcázar on 11/02/21.
//

#include <iostream>
#include "lista.cpp"

using namespace std;

template <typename E>
void imprimirLista(ListaEnlazada<E>& L);

int main(int argc, const char * argv[]) {
    ListaEnlazada<int> L1;
    ListaEnlazada<string> L2;
    for (int i = 0; i <= 20; i++)
        L1.adicionar(i);
    imprimirLista(L1);
    L2.adicionar("Esteban");
    L2.adicionar("Diana");
    L2.adicionar("Sergio");
    L2.adicionar("Milena");
    imprimirLista(L2);
    return 0;
}

template <typename E> //Función genérica para mostrar la lista
void imprimirLista(ListaEnlazada<E>& L) {
  int currpos = L.posicionActual();
  L.irAlInicio();
  cout << "< ";
  for (int i=0; i<currpos; i++) {
    cout << L.traerValor() << " ";
    L.siguiente();
  }
  cout << "| ";
  while (L.posicionActual()<L.magnitud()) {
    cout << L.traerValor() << " ";
    L.siguiente();
  }
  cout << ">\n";
  L.irAPosicion(currpos); //Volver la lista a la posici´on original
}
