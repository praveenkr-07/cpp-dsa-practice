#include<iostream>
using namespace std;
class Book{
private :
    string name;
    float price;
    int Pages;
public :
    void setName(string name)
    {
        this->name = name;
    }
    void getName()
    {
        cout<<"Name of the book is : "<<name<<endl;
    }

    void setPrice(int  price)
    {
        this->price = price;
    }
    void getPrice()
    {
        cout<<"Price of the book is : "<<price<<endl;
    }

    void setPages(int Pages)
    {
        this->Pages = Pages;
    }

    void getPages()
    {
        cout<<"No. of pages in the book is : "<<Pages<<endl;
    }

    int countBooks(int price){
        if(this->price<price) return 0;
        else return true; 
    }

    bool isBookPresent(string book)
    {
        if(name == book) return true;
        else return false;
    }

};
int main()
{
    Book HarryPotter;
    HarryPotter.setName("Harry Potter");
    HarryPotter.setPages(800);
    HarryPotter.setPrice(1000);
    cout<<HarryPotter.countBooks(1000)<<endl;
    HarryPotter.getName();
}
