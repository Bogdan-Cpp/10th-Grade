#include <iostream>

int sumaCifrelor(int x, int &sum);

int main(){
    int x;
    int sum = 0;
    std::cin >> x;
    sumaCifrelor(x, sum);
    std::cout << sum << std::endl;
    system("pause");
    return 0;
}

int sumaCifrelor(int x, int &sum){
    int rez;
    while(x > 1){
      sum += (x % 10);
      x /= 10;
    }
    return sum;
}