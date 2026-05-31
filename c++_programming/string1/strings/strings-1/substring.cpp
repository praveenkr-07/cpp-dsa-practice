#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter your string : ";
    getline(cin, str);

    cout<<"size of your string is : "<<str.size()<<endl;
    cout << "your string is : " << str;
    cout << endl;

    //str.substr( (is waale index se start kro , index k aage k itne elements utha lo  );
    cout << str.substr((str.size() / 2), str.size() / 2 ); 

}
