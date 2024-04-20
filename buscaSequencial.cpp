// Busca Sequencial - Lista linear

#include <iostream>
#include <vector>
using namespace std;

int buscaDados(vector<int> &arr, int x)  
{
    // Percorre as informações do vetor até encontrar o elemento
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == x) {
            return i;   
        }
    }
    // Caso não encontre o elemento 
    return -1;
}

int main() {
    vector<int> arr = {0,54,48,92,23,27,1,2,3,4,7,77};
    int x = 7;
    
    int resultado = buscaDados(arr, x);
    
    if (resultado == -1) {
        cout << "Elemento não encontrado \n";
    } else {
        cout << "Elemento " << x <<  " encontrado no indice: " << resultado << endl;
        cout << "Elemento armazenado em: " << &x << endl;
    }
    
    return 0;
}
