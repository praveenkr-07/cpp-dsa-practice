#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> us;

    // Insert elments using insert()
    us.insert(3);
    us.insert(1);
    us.insert(2);
    us.insert(5);
    us.insert(7);
    us.insert(6);
    us.insert(9);

    int target = 8;
    if(us.find(target)!=us.end()){  // => target exists
        cout<<target<<" is Exists"<<endl;
    }
    else {
        cout<<target<<" is not Exists"<<endl;
    }
    for (auto x : us)
        cout << x << " ";
} 