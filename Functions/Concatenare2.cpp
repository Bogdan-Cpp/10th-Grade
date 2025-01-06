#include <iostream>
#include <cmath>
#include <vector>

int concatenare(int a, int b);

int main(){
    std::cout << concatenare(412, 27);
    
    system("pause");
    return 0;
}

int concatenare(int a, int b){
   std::vector<int> lista;
   int tot;
   int rez;
   int val = b;
  
   while(b > 0){
      tot = b % 10;
      lista.push_back(tot);
      b /= 10;
   }
   int size = lista.size();

   rez = a * pow(10, size) + val;
   return rez;
}