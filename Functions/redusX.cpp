#include <iostream>
#include <vector>
#include <algorithm>

void citire(std::vector<int> &lista, int &a, int &times);
bool isPrime(int j);
void redus(std::vector<int> &lista);
void ordonare(std::vector<int> &temp);
void afisasre(std::vector<int> &temp);

int main(){
    int a;
    int times;
    std::vector<int> lista;

    citire(lista, a, times);
    redus(lista);

    return 0;
}

void citire(std::vector<int> &lista, int &a, int &times){
    std::cin >> times;

    for(int i = 0; i < times; i++){
        std::cin >> a;
        lista.push_back(a);
    }
}

void redus(std::vector<int> &lista){
    std::vector<int> temp;

    for(int i = 0; i < lista.size(); i++){
        int first = lista[i];
        int total = 1;
        
        for(int j = 2; j <= first; j++){
           if(first % j == 0 && isPrime(j)){
               total *= j;
           }
        }
        temp.push_back(total);
    }
    ordonare(temp);
    afisasre(temp);
}

void ordonare(std::vector<int> &temp){
    std::sort(temp.begin(), temp.end(), std::greater<int>());
}

void afisasre(std::vector<int> &temp){
    for(int elem : temp){
        std::cout << elem << " ";
    }
}

bool isPrime(int j){
    if(j == 2 || j == 3){return true;}

    for(int i = 2; i < j; i++){
        if(j % i == 0){
            return false;
        }
    }
    return true;
}