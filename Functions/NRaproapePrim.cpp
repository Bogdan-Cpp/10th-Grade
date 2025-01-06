#include <iostream>
#include <vector>

bool aproape(int x);
bool isPrime(int n);

int main(){
    std::cout << aproape(14);
    system("pause");
    return 0;
}

bool aproape(int x){
    int target = x;
    std::vector<int> lista;
    std::vector<int> prime;
    int rez;

    for(int i = 2; i < x; i++){
        if(x % i == 0){
            lista.push_back(i);
        }
    }

    for(int q = 0; q < lista.size(); q++){
        if(isPrime(lista[q])){
            prime.push_back(lista[q]);
        }
    }
    
    for(int a = 0; a < prime.size();){
        for(int b = a + 1; b < prime.size(); b++){
            if(prime[a] * prime[b] == target){
                return true;
            }
            else{
                return false;
            }
        }
    }
    return false;
}

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}