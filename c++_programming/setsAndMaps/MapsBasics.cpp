#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> map;
    map["Praveen"] = 135;
    map["Rahul"] = 144;
    map["Sanchit"] = 153;
    map["Ankit"] = 111;

    for (auto p : map)
    {
        cout << p.first << " " << p.second << endl;
    }

    // map.erase("Ankit");
    // cout<<endl;

    // for(auto p : map){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    string target = "Ankit";
    if (map.find(target) != map.end())
    {
        cout << target << " exists";
    }
    else
    {
        cout << target << " not exists";
    }
}

