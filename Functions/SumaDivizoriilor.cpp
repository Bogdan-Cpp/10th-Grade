#include <iostream>

int sumaDiv(int n);

int main(){
    std::cout << sumaDiv(12) << "\n";
    
    system("pause");
    return 0;
}

int sumaDiv(int n){
   int total = 0;

   for(int i = 2; i <= n; i++){
      if(n % i == 0){
        total += i;
      }
   }
   return total;
}