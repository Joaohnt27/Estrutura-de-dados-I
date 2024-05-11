#include <iostream>
using namespace std;

int main()
{
    int var = 76;
    int *ptr;
    ptr = &var;
    
    cout << "Conteúdo de var = " << var << endl;
    cout << "Enderço de var = " << &var << endl;
    cout << "Conteúdo apontado por ptr: " << *ptr << endl;
    cout << "Endereço apontado por ptr: " << ptr << endl;
    cout << "Endereço de ptr: " << &ptr << endl << endl;
    
    *ptr = 777;
    
    cout << "Conteúdo de var = " << var << endl;
    cout << "Enderço de var = " << &var << endl;
    cout << "Conteúdo apontado por ptr: " << *ptr << endl;
    cout << "Endereço apontado por ptr: " << ptr << endl;
    cout << "Endereço de ptr: " << &ptr << endl;
    
    return 0;
}
