#include <iostream>
#include <iomanip>
using namespace std;


#define LIN 10;
#define COL 10;

int main()
{
    int x;
    int y;
    int tabela[LIN][COL];
    
    // Preencher a tabela
    for(y = 0; y < LIN; y += 1){
        for (x = 0; x < COL; x += 1){
            tabela[y][x] = y * x;
            cout << retw(6) << 0;
        }
    }
    return 0;
}
