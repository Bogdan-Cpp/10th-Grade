#include <iostream>

int suma(int &a, int &x);

int main(){
    int a;
    int x;

    std::cin >> a >> x;
    std::cout << suma(a, x) << a << std::endl;
    system("pause");
    return 0;
}

int suma(int &a, int &x){
    a += x;
    return a;
}
