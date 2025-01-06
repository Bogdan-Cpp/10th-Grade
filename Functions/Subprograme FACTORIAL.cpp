#include <iostream>

long long factorial(int n);

int main(){
    std::cout << factorial(15);

    std::cout << std::endl;
    system("pause");
    return 0;
}

long long factorial(int n){
    long long total = 1;
    for(int i = 1; i <= n; i++){
        total *= i;
    }
    return total;
}

//long long e ca int doar ca poate stoca un numar mai mare 