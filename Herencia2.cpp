#include<iostream>
using namespace std;


class Forma {
    public:
    double Area;
    double Volumen;
};


class Cubo : public Forma {
        public:
            double lado;
            Cubo (double l){
                this->lado = l ;
                this->Area = lado * lado * 6;
                this->Volumen = lado * lado * lado;
            }

};

class Esfera : public Forma{

    public: 
        double radio;
        Esfera(double r){
            this->radio = r;
            this->Area = 4 * 3.14 * radio * radio;
            this->Volumen = (4.0/ 3.0) * 3.14 * radio * radio * radio;

        }


};




int main (){
cout << "-----------------------------------------------------------------"<< endl;
    Cubo cubo(2.5);
    
    cout << " El area del Cubo: " << cubo.Area << " cm2 " << endl;
    cout << " El volumen del Cubo: " << cubo.Volumen << " cm3 " << endl;
cout << "-----------------------------------------------------------------"<< endl;
    Esfera esfera(5);

    cout << " El area de la Esfera : " << esfera.Area << " cm2 " << endl;
    cout << " El volumen del Esfera : " << esfera.Volumen << " cm3 " << endl;
    
cout << "-----------------------------------------------------------------"<< endl;
    return 0;
    
}