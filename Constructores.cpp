#include<iostream>
using namespace std;

class  Estudiantes{
    public:
        string nombre;
        int edad;
        double promedio;
    Estudiantes(string nombre,int edad,double promedio ){
        
        this->nombre = nombre ;
        this->edad = edad ;
        this->promedio = promedio ;
    }

};



int main (){

    Estudiantes estudiante1("Mariano", 28, 8.5);
    Estudiantes estudiante2("Lucy", 33, 6.66);

    cout << "Nombre: " << estudiante1.nombre << endl;
    cout <<"Edad: " << estudiante1.edad << endl;
    cout <<"Promedio: " << estudiante1.promedio << " ptos."<< endl;
    cout << "----------------------------------------"<< endl;
    cout << "Nombre: " << estudiante2.nombre << endl;
    cout <<"Edad: " << estudiante2.edad << endl;
    cout <<"Promedio: " << estudiante2.promedio << " ptos."<< endl; 
    return 0;
    
}