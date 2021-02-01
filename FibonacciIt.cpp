#include <iostream>
using namespace std;

void fib(int num) {
   int x = 0, y = 1, z = 0;
   //'n' iteraciones: O(n)
   for (int i = 0; i < num; i++) {
      cout << x << " ";
      z = x + y;
      x = y;
      y = z;
   }
}

int main() {
   int num;
   cout << "Ingrese el número de términos deseados para aproximar la serie: ";
   cin >> num;
   cout << "\nLos " << num << " primeros términos de la Serie de Fibonacci son: ";
   fib(num);
   return 0;
}