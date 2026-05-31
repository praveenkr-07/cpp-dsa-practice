#include <iostream>
using namespace std;
class Bike
{
public:
    static int noOfBikes;
    int tyreSize;
    int engSize;

    Bike(int tyreSize, string name, int engSize)
    {
        this->tyreSize = tyreSize;
        this->engSize = engSize;
        cout<<noOfBikes<<" "<< name << " -> " << tyreSize << " -> " << engSize << endl;
    }
    void setNoofBikes(int no)
    {
        noOfBikes = no;
        noOfBikes++;
    }
};
int Bike::noOfBikes = 1;
int main()
{
    Bike tvs(50, "tvs", 100);
    Bike Honda(45, "Honda", 90);
    Bike hero(45, "Hero", 150);
}
