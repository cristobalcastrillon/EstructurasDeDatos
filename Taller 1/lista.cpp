//
//  lista.cpp
//  TallerListas
//
//  Created by Cristóbal Castrillón Balcázar on 11/02/21.
//

#include <iostream>
#include "nodo.cpp"

template <typename E> struct ListaEnlazada {
  private:
    Nodo<E>* cabeza;
    Nodo<E>* cola;
    Nodo<E>* actual;
    int dimension;
    void eliminarTodo() { // Libera la memoria usada por los nodos
      while(cabeza != NULL) {
        actual = cabeza;
        cabeza = cabeza->siguiente;
        delete actual;
      }
    }
  public:
    ListaEnlazada() {
      actual = cola = cabeza = new Nodo<E>;
      dimension = 0;
    }
    ~ListaEnlazada() {
      eliminarTodo(); // Destructor
    }
    void limpiar() {
      eliminarTodo(); // Limpia la lista
      ListaEnlazada();
    }
    void insertar(const E& it) {
      actual->siguiente = new Nodo<E>(it, actual->siguiente);
      if (cola == actual)
      cola = actual->siguiente;
      dimension++;
    }
    void adicionar(const E& it) {
      cola = cola->siguiente = new Nodo<E>(it, NULL);
      dimension++;
    }
    E eliminar() {
      //Validar(actual->siguiente != NULL, "No hay elemento");
      E it = actual->siguiente->elemento; // Recuerda el valor
      Nodo<E>* ltemp = actual->siguiente; // Recuerda el enlace del nodo
      if (cola == actual->siguiente)
        cola = actual;
      actual->siguiente = actual->siguiente->siguiente;
      delete ltemp;
      dimension--;
      return it;
    }
    void irAlInicio() {
      actual = cabeza;
    }
    void irAlFinal() {
      actual = cola;
    }
    void anterior() {
      if (actual == cabeza)
      return;
      Nodo<E>* temp = cabeza;
      while (temp->siguiente!=actual)
        temp=temp->siguiente;
      actual = temp;
    }
    void siguiente() {
      if (actual != cola)
        actual = actual->siguiente;
    }
    int magnitud() const {
      return dimension;
    }
    int posicionActual() const {
      Nodo<E>* temp = cabeza;
      int i;
      for (i=0; actual != temp; i++)
        temp = temp->siguiente;
      return i;
    }
    void irAPosicion(int pos) {
      //Validar ((pos>=0)&&(pos<=dimension), "Posici´on fuera de rango");
      actual = cabeza;
      for(int i=0; i<pos; i++)
        actual = actual->siguiente;
    }
    const E& traerValor() const //Devuelve el emento actual
    {
      //Validar(actual->siguiente != NULL, "No hay valor");
      return actual->siguiente->elemento;
    }
};
