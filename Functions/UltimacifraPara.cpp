#include <iostream>
#include <vector>

int par(int x);

int main(){
    std::cout << par(632428375) << "\n";
   
    system("pause");
    return 0;
}

int par(int x){
   std::vector<int> lista;
   std::vector<int> nrpare;
   int rez;
   int last;

   while(x > 1){
     rez = x % 10;
     lista.push_back(rez);
     x /= 10;
   }

   for(int i = 0; i < lista.size(); i++){
      if(lista[i] % 2 == 0){
        nrpare.push_back(lista[i]);
      }
   }

   last = nrpare[0];
   

   return last;
}