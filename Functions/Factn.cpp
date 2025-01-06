#include <iostream>

void fact(int x, int a, int b);

int main(){
    int x;
    int a = 1;
    int b = 1;

    std::cin >> x;
    fact(x, a, b);

    system("pause");
    return 0;
}

void fact(int x, int a, int b){
   for(int i = 1; i <= x - 1; i++){
      a *= i;
   }

   for(int i = 1; i <= x + 1; i++){
      b *= i;
   }

   std::cout << a + 1 << " " << b - 1;
}