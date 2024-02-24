#include <iostream>
#include <stdexcept> // Para exceções padrão
#include <string>
using namespace std;

const int MAX = 100; // Capacidade máxima da pilha

// Criando uma clase chamada: Pilha
class Pilha {
	private:
		string pilha[MAX]; // Vetor que aramazena os elementos da pilha
		int topo; // Índice do topo da pilha
	public:
		// Construtor da pilha
		Pilha() {
			topo = -1; // Indica que a pilha esta vazia 
		}
		
		// Método que verifica se a pilha está vazia 
		bool vazia() {
			return topo == -1; // Retorna verdadeiro se o topo for -1
		}
		
		// Método que verifica se a pilha está cheia
		bool cheia() {
			return topo == MAX - 1; // Retorna verdadeiro se o topo for MAX - 1
		}

		// Método que insere um elemento no topo da pilha 
		void push(const string& elemento) {
			if (!cheia()) { // Verifica se a pilha não está cheia
				topo++; // Incrementa o topo
				pilha[topo] = elemento; // Armazena o elemento no topo
				
				cout << "Elemento " << elemento << " inserido na pilha." << endl; 	
			} else {
				throw overflow_error("Pilha cheia!"); // Lançar uma execução de estouro 
			}
		}
		
		// Método que remove um elemento do topo da pilha
		string pop () {
			if (!vazia()){ // Verifica se a pilha não está vazia
			string elemento = pilha[topo]; // Guarda o elemento no topo
			topo--; // Decrementa o topo
			return elemento; // Retorna o elemento removido 	
			} else {
				throw overflow_error("Pilha vazia!"); // Lançar uma execução de subfluxo 
			}
		}
		
		// Método que mostra elementos da pilha
		void MostrarElementos() {
			cout << "Elementos da pilha: " << endl;
			for (int i = topo; i >= 0; i--){
				cout << pilha[i] << endl;
			}
		} 
};

int main() {
	Pilha p;
	string elemento;
	int opcao;
	
	do {
		cout << "\nEscolha uma opcao: " << endl;
		cout << "1. Inserir elemento na pilha." << endl;
		cout << "2. Retirar elemento da pilha." << endl;
		cout << "3. Mostrar elementos da pilha." << endl;
		cout << "4. Sair" << endl;
		cout << "Opcao: ";
		cin >> opcao;
		
		switch (opcao) {
			case 1:
			cout << "Insira um elemento na pilha: ";
			cin >> elemento;
			try {
				p.push(elemento); 
			} catch (const exception& e) {
				cout << "Erro: " << e.what() << endl;
			}
			break;
			
			case 2: 
			try {
				cout << "Elemento desempilhado: " << p.pop() << endl;
			} catch (const exception& e) {
				cout << "Erro: " << e.what() << endl;
			}
			break;
			
			case 3: 
			p.MostrarElementos();
			break;
			
			case 4: 
			cout << "Saindo..." << endl;
			break;
			
			default:
				cout << "Opcao inválida! Tente novamente." << endl;
		} 
	} while (opcao != 4);
	
	return 0;
}