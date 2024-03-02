#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

const int MAX = 100;

class Pilha {
    private:
        string pilha[MAX];
        int topo;
    public: 
        // Construtor da Pilha
        Pilha() {
            topo = -1;
        }
        
        // Verifica se a pilha está vazia
        bool vazia() {
            return topo == -1;
        }
        
        // Verifica se a pilha está cheia
        bool cheia() {
            return topo == MAX -1;
        }
        
        // Empilha os elementos
        void empilha(const string& elemento){
            if(!cheia()){
                topo++;
                pilha[topo] = elemento;
                cout << "Elemento inserido na pilha!" << endl;
            } else {
                throw overflow_error("Pilha está cheia :(");
            }
        }
        
        // Desempilha os elementos 
        string desempilha() {
            if(!vazia()){
                string elemento = pilha[topo];
                topo--;
                return elemento;
            } else {
                throw underflow_error("Pilha vazia!");
            }
        }
        
        // Mostrar os elementos da pilha
        void MostrarElementos(){
            cout << "Mostrar elementos:" << endl;
            for (int i = topo; i >= 0; i--) {
                cout << pilha[i] << endl;
            }
        }
};

int main()
{
    Pilha p;
    string elemento;
    int opcao;
    
    do {
        cout << "Escolha:" << endl;
        cout << "1. Empilhar um elemento" << endl;
        cout << "2. Desempilhar um elemento" << endl;
        cout << "3. Mostrar Elementos" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;
        
        switch(opcao) {
            case 1:
            cout << "Insira um elemento na pilha: ";
            cin >> elemento;
            
            try {
                p.empilha(elemento);
            } catch (const exception& e) {
                cout << "Erro: " << e.what() << endl;
            }
            break;
            
            case 2:
            try {
                cout << "Elemento desempilhado: " << p.desempilha() << endl;
            } catch (const exception& e) {
                cout << "Erro: " << e.what() << endl;
            }
            break;
            
            case 3:
            p.MostrarElementos();
            break;
            
            case 4:
            cout << "Saindo... =D" << endl;
            break;
            
            default:
            cout << "Opção inválida" << endl;
        }
    } while (opcao != 4);

    return 0;
}
