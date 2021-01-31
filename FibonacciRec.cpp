#include <iostream>
using namespace std;

int fibRec(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }
   else {
      return(fibRec(x-1)+fibRec(x-2));
   }
}

int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fibRec(i);
      i++;
   }
   return 0;
}