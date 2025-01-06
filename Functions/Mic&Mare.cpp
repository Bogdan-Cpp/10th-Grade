#include <iostream>
#include <vector>
#include <algorithm>

int cifra(int x, int &mic, int &mare);

int main(){
    int x;
    int mic = 0;
    int mare = 0;

    std::cin >> x;

    cifra(x, mic, mare);
    std::cout << mic << " " << mare;

    system("pause");
    return 0;
}

int cifra(int x, int &mic, int &mare){
   std::vector<int> lista;

   while(x > 0){
     lista.push_back(x % 10);
     x /= 10;
   }
   std::sort(lista.begin(), lista.end());

   mare = lista[lista.size() - 1];
   mic = lista[0];

   return mare, mic;
}