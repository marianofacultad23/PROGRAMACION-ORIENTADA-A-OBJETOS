#include<iostream>
using namespace std;

class Automoviles{
    public:
        string marca;
        string modelo;
        int ano;
        string color;

    Automoviles(string marca,string modelo,int ano,string color ){
        this->marca = marca;
        this->modelo = modelo;
        this->ano = ano;
        this->color = color ; 

    }


};


int main (){

    Automoviles automovil1("Chevrolet", "Spin", 2017, "Azul");

    cout << automovil1.marca << endl;
    cout << automovil1.modelo<< endl;
    cout << automovil1.ano << endl;
    cout << automovil1.color << endl;
    return 0;
    
}