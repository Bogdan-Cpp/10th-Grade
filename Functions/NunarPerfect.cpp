#include <iostream>

void perfect(int a, int b);
bool isPerfect(int n);

int main(){
    int a;
    int b;
    std::cin >> a >> b;
    perfect(a, b);
    system("pause");
    return 0;
}

void perfect(int a, int b){
    if(a > b){
        std::swap(a, b);
    }

    for(int i = 1; i <= b; i++){
       if(isPerfect(i)){
         std::cout << i << " ";
       }
    }
}

bool isPerfect(int n){
    int tot = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            tot += i;
        }
    }

    if(tot == n){
        return true;
    }
    else{
        return false;
    }
}
