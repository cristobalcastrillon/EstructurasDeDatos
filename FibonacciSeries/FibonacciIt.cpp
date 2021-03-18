#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long unsigned fib(int num) {
   long long unsigned x = 0, y = 1, z = 0;
   //'n' iteraciones: O(n)
   for (int i = 0; i <= num; i++) {
      // cout << x << " ";
      z = x + y;
      x = y;
      y = z;
   }
   return x;
}

int main() {
   int num;
   cout << "Ingrese el número de términos deseados para aproximar la serie: ";
   cin >> num;
   // cout << "\nLos " << num << " primeros términos de la Serie de Fibonacci son: ";
   //TODO: Hacer que funque el siguiente código (auto; problema la versión del compilador)
   auto inicio = high_resolution_clock::now();
   long long unsigned res = fib(num);
   auto final = high_resolution_clock::now();
   auto duracion = duration_cast<milliseconds>(final - inicio).count();
   cout << res << endl;
   cout << "Tiempo de ejecución: " << duracion << endl;
   return 0;
}
