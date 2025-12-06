#include<iostream>
using namespace std;

class Pizza{
    public: 
        string ingredientes1;
        string ingredientes2;

    Pizza(){

    }    
    Pizza(string ingredientes1){
        this->ingredientes1 = ingredientes1;
    }
    Pizza(string ingredientes1,string ingredientes2){
        this->ingredientes1 = ingredientes1;
        this->ingredientes2 = ingredientes2;
}
};
    


int main (){

    Pizza pizza1 ("Peperoni");
    Pizza pizza2 ("Peperoni","Mushrooms");
    Pizza pizza3;
    cout << pizza1.ingredientes1 << endl; 
    cout << pizza2.ingredientes1 << " y " << pizza2.ingredientes2<<endl; 
    

    return 0;
    
}