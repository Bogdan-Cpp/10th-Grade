#include <iostream> 
#include <vector>
#include <cmath>

int prime(int x, int &a, int &b);
bool isPrime(int n);

int main(){
    int x;
    int b = 0;
    int a = 0;
    std::cin >> x;
    prime(x, a, b);
    std::cout << a << " " << b << std::endl;
    system("pause");
    return 0;
}

int prime(int x, int &a, int &b){
   std::vector<int> lista;

   for(int i = 2; i < x; i++){
     if(isPrime(i)){
        lista.push_back(i);
     }
   }
  a = lista[lista.size() - 1];
  b = lista[lista.size() - 2];

  return a, b;
}

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}