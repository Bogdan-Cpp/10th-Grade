#include <iostream>
#include <list>

int sumaCifrelor(int n);

int main(){
   std::cout << sumaCifrelor(241);

   std::cout << std::endl;
   system("pause");
   return 0;
}

int sumaCifrelor(int n){
    int total = 0;
    int rez;
    std::list<int> lista;
    
    while(n > 0){
       rez = n % 10;
       lista.push_back(rez);
       n /= 10;
    }

    for(int elem : lista){
        total += elem;
    }
    return total;
}