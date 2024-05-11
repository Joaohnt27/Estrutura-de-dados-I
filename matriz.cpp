#include <iostream>
using namespace std;

int main()
{
    const int TAMANHO_LINHA = 10;
    const int TAMANHO_COLUNA = 10;
    
    // Cria uma matriz 5 x 5 
    char matriz[TAMANHO_LINHA][TAMANHO_COLUNA];
    
    // Preencher a matriz
    for (int linha = 0; linha < TAMANHO_LINHA; ++linha) {
        for (int coluna = 0; coluna < TAMANHO_COLUNA; ++coluna){
            matriz[linha][coluna] = '*';
        }
    }
    
    // Imprime a matriz na tela
    for (int linha = 0; linha < TAMANHO_LINHA; ++linha) {
        for (int coluna = 0; coluna < TAMANHO_COLUNA; ++coluna){
            cout << matriz[linha][coluna] << ' ';
        }
        cout << endl;
    }
    return 0;
}
