#include<iostream>
using namespace std;

class Animal {
    public: 
        bool vivo = true;
        void comer(){
            cout<< "Esta comiendo... "<< endl; 
        }



};

class Perro : public Animal {
        public: 
            void ladrar(){
                cout << "Ladrando..."<< endl;
            }
};

class Gato : public Animal {
        public: 
            void maullar(){
                cout<< "Maullando..."<<endl;
            }
};


int main (){

    Perro  perro;
    Gato gato;
    cout<< perro.vivo << endl;
    perro.comer();
    cout << gato.vivo << endl;
    gato.comer();

    perro.ladrar();
    gato.maullar();





    return 0;
    
}