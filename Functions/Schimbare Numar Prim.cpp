#include <iostream>
#include <vector>

void citire(std::vector<int> &lista, int &a, int &times);
bool prim(int n);
void urmatorul_prim(int &n);
void inloc(std::vector<int> &lista, int &count, int &n);
void afisare(std::vector<int> lista);

int main(){
    std::vector<int> lista;
    int a;
    int times;
    int count = 0;
    
    citire(lista, a, times);
    
    for(int i = 0; i < lista.size(); i++){
        int n = lista[i];

        if(!prim(n)){
            urmatorul_prim(n);
            inloc(lista, count, n);
        }
        count += 1;
    }

    afisare(lista);

    return 0;
}

void citire(std::vector<int> &lista, int &a, int &times){
    std::cin >> times;

    for(int i = 0; i < times; i++){
        std::cin >> a;
        lista.push_back(a);
    }
}

void urmatorul_prim(int &n){
    while(!prim(n)){
       n += 1;
    }
}

void inloc(std::vector<int> &lista, int &count, int &n){
    lista[count] = n;
}

void afisare(std::vector<int> lista){
    for(int elem : lista){
        std::cout << elem << " ";
    }
}

bool prim(int n){
    if(n == 2 || n == 3){return true;}

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}