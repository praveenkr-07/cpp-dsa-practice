#include <iostream>
using namespace std;
class Bike
{
public:
    int tyreSize;
    int engSize;
    string name;
    Bike(int tyreSize, string name, int engSize)
    {
        this->tyreSize = tyreSize;
        this->engSize = engSize;
        this->name = name;
        cout << name << " -> " << tyreSize << " -> " << engSize << endl;
    }
    ~Bike(){
        cout<<this->name;
        cout<<" Destructor called"<<endl;
    }
};
int main()
{
    Bike tvs(50,"tvs",100);
    Bike Honda(45,"Honda",90);
    Bike hero(45,"Hero",150);
    Bike bmw(200,"BMW",1500);
    
}
// destructor called -> when object goes out of scope

