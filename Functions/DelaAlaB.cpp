#include <iostream>

void afisare(int a, int b);
bool isPrime(int n);

int main(){
    int a;
    int b;
    std::cin >> a >> b;
    afisare(a, b);
    system("pause");
    return 0;
}

void afisare(int a, int b){
    while(a != b){
        if(a > b){
            if(isPrime(a)){
              std::cout << a << " ";
            }
            a--;
        }
        if(a < b){
            if(isPrime(a)){
               std::cout << a << " ";
            }
            a++;
        }
    }
    if(isPrime(b)){
        std::cout << b;
    }
}

bool isPrime(int n){
    for(int i  = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}