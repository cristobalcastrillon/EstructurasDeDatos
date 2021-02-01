#include <iostream>
using namespace std;

int fibRec(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }
   else {
     //O(??)
      return(fibRec(x-1)+fibRec(x-2));
   }
}

int main() {
   int x , i=0;
   cout << "Ingrese el número de términos deseados para aproximar la serie: ";
   cin >> x;
   cout << "\nLos " << x << " primeros términos de la Serie de Fibonacci son: ";
   while(i < x) {
      cout << " " << fibRec(i);
      i++;
   }
   return 0;
}