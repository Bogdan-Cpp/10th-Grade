#include <iostream>

int par(int x);

int main(){
    std::cout << par(57453);
    system("pause");
    return 0;
}

int par(int x){
    int rez;
    while(x){
        rez = x % 10;
        if(rez % 2 == 0){
            return rez;
        }
        x /= 10;
    }
}