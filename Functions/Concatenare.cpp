#include <iostream>
#include <string>
#include <vector>

std::string concatenare(int a, int b);

int main(){
    std::cout << concatenare(412, 27) << "\n";

    system("pause");
    return 0;
}

std::string concatenare(int a, int b){
  std::vector<std::string> lista;
  std::string nr1 = std::to_string(a);
  std::string nr2 = std::to_string(b);
  std::string theNum = "";
  lista.push_back(nr1);
  lista.push_back(nr2);

  for(int i = 0; i < lista.size(); i++){
    theNum += lista[i];
  }

  return theNum;
}