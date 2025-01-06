#include <iostream>

int theSum(int  x, int &sum);

int main(){
    int x; 
    int sum = 0;

    std::cin >> x;

    theSum(x, sum);
    std::cout << sum;
    system("pause");
    return 0;
}

int theSum(int x, int &sum){
    
    for(int i = 1; i <= x; i++){
        if(x % i == 0){
           sum += i;
        }
    }
    return sum;
}