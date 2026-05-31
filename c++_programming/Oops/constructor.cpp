#include <iostream>
using namespace std;
class Bike
{
public:
    int tyreSize;
    int engSize;

    // default Constructor
    //   Bike(){
    //     cout<<"Constructor called"<<endl;
    //   }

    // paramaterised Constructor
    Bike(int tyreSize, string name, int engSize)
    {
        this->tyreSize = tyreSize;
        this->engSize = engSize;
        cout << name << " -> " << tyreSize << " -> " << engSize << endl;
    }
};
int main()
{
    Bike tvs(50, "tvs", 100);
    Bike Honda(45, "Honda", 90);
    Bike hero(45, "Hero", 150);
}
