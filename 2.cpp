#include<iostream>
using namespace std;

class Automoviles {
    public:
        string marca;
        string modelo;
        int ano;
        string color;
    
        void acelerar(){
        cout<< "Pisas el acelerador! " << endl;
    }
        void freno(){
        cout<< "Pisas el freno! " << endl;
    }
    
};


int main (){

    Automoviles auto1;
    auto1.marca = "Ford";
    auto1.modelo = "Mustang";
    auto1.color = "Rojo";
    auto1.ano = 2025;
    
    cout << auto1.marca << endl;
    cout << auto1.modelo << endl;
    cout << auto1.color << endl;
    cout << auto1.ano << endl;
    
    auto1.acelerar();
    auto1.freno();

    return 0;

}