#include <iostream>
#include <vector>

int doubleNum(int x, int &num);

int main(){
    int x;
    int num = 0;

    doubleNum(x, num);
    std::cout << num << std::endl;

    system("pause");
    return 0;
}

int doubleNum(int x, int &num){
    std::vector<int> lista;
    
    std::cin >> x;
    while(x > 1){
        lista.push_back(x % 10);
        x /= 10;
    }
    lista.insert(lista.end(), lista[lista.size() - 1]);
    
    for(int i = lista.size() - 1; i >= 0; i--){
        num = num * 10 + lista[i];
    }
    
    return num;
}