#include <iostream>
#include <vector>

int zero(int x);

int main(){
    std::cout << zero(15) << "\n";
    system("pause");
    return 0;
}

int zero(int x){
    std::vector<int> lista;
    int rez = 0;
    long long total = 1;
    for(int i = 1; i <= x; i++){
       total *= i;
    }
    
   while(total % 10 == 0){
      rez = total % 10;
      lista.push_back(rez);
      total /= 10;
    }
    
    return lista.size();
}