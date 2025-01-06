#include <iostream>
#include <vector>
#include <algorithm>

int cmmnr(int n);

int main(){
    std::cout << cmmnr(890);

    std::cout << std::endl;
    system("pause");
    return 0;
}

int cmmnr(int n){
   std::vector<int> list;
   int final = 0;
   int num;
   
   while(n > 0){
      num = n % 10;
      list.push_back(num);
      n /= 10;
   }

   std::sort(list.begin(), list.end(), std::greater<>());

   for(int i = 0; i < list.size(); i++){
      final = (final * 10) + list[i];
   }
   
   return final;
}