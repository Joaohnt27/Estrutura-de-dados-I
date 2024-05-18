#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Poder
{
public:
    string nome;
    string descricao;
    int dano;
    
    Poder(string nome, string descricao, int dano)
    {
        this->nome = nome;
        this->descricao = descricao;
        this->dano = dano;
    }
};

class Personagem
{
public: 
    string nome;
    int vida;
    int mana;
    vector<Poder> poderes;
    
    Personem(string nome, int vida, int mana)
    {
      this->nome = nome;
      this->vida = vida;
      this->mana = mana;
    }
    
    void adicionarPoder(Poder poder)
    {
        poderes.push_back(poder);
    }
    
    void removerPoder(string nomePoder)
    {
        for (auto it = poderes.begin(); it != poderes.end(); ++it)
        {
            if(it->nome == nomePoder)
            {
                poderes.erase(it);
                break;
            }
        }
    }
    
    void mostrarPoderes()
    {
        if (poderes.empty())
        {
            cout << "O personagem não possui poderes." << endl;
            return;
        }
        
        cout << "Poderes: " << endl;
        for (Poder poder : poderes) 
        {
            cout << " - " << poder.nome << ":" << poder.descricao << " (Dano:" << poder.dano << ")" << endl;
        }
    }
};

int main()
{
    
    return 0;
}
