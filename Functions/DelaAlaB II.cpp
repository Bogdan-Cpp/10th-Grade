//metoda II
#include <iostream>

void afisare(int a, int b);
bool isPrime(int n);

int main(){
    int b;
    int a;
    std::cin >> a >> b;
    afisare(a, b);
    system("pause");
    return 0;
}

void afisare(int a, int b){
    if(a > b){
        std::swap(a, b);
    }

    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            std::cout << i << " ";
        }
    }
}

bool isPrime(int n){
   for(int i = 2; i < n; i++){
      if(n % i == 0){
         return false;
      }
   }
   return true;
}