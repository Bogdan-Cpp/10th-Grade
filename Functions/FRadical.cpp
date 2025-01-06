#include <iostream>
#include <vector>
#include <cmath>

int main(){
    std::vector<int> lista;
    std::vector<int> patrate;
    int n = 15000;
    int x;

    for(int i = 1; i <= 15000; i++){
         if (n % i == 0){
            lista.push_back(i);
        }
    }

    for(int j = 0; j < lista.size(); j++){
        double num = lista[j];
        double radical = sqrt(num);
       if(radical == static_cast<int>(radical)){
        patrate.push_back(num);
       }
    }
    x = sqrt(patrate[patrate.size() - 1]);
    
    // x^2 * y = n
    for(int a = 0; a < lista.size(); a++){
        if(n == pow(x, 2) * lista[a]){
            std::cout << x << " " << lista[a] << std::endl;
        }
    }
    system("pause");
    return 0;
}