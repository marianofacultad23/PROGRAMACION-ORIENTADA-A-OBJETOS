#include<iostream>
using namespace std;

class Humano {
    public: 
        string nombre ;
        string ocupacion;
        int edad;

    void comer (){
        cout<< " Esta persona esta comiendo " << endl;
    }
    void beber (){
        cout<< " Esta persona esta bebiendo " << endl;
    }
    void dormir (){
        cout<< " Esta persona esta durmiendo " << endl;
    }
};




int main (){


    Humano humano1;

    humano1.nombre = "Mariano";
    humano1.edad = 28;
    humano1.ocupacion = "Estudiante";

    cout << humano1.nombre << endl;
    cout << humano1.edad << endl;
    cout << humano1.ocupacion << endl;

    humano1.beber();
    humano1.comer();
    humano1.dormir();


    return 0;
    
}