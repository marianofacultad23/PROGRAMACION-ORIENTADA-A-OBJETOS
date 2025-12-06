#include<iostream>
using namespace std;

class Estufa{
    private: 
        int temperatura = 0 ;

    public :
       Estufa(int temperatura){
        //this->temperatura = temperatura;
        setTemperatura(temperatura);
       };
       int getTemperatura()  {
        return temperatura;
       }
       void setTemperatura(int temperatura){
        if(temperatura < 0 ){
          temperatura = 0 ;
        }else if (temperatura >= 10 ){
          this->temperatura = 10;
        }
        else {
          this->temperatura = temperatura;
        }
         ;

       }
};


int main (){

  Estufa estufa(33);

  //estufa.settemperatura(23);
  cout << estufa.getTemperatura() << endl;

    return 0;
    
}