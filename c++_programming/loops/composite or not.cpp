#include<iostream> 
using namespace std;   

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is neither prime nor composite.";
        return 0;
    }

    bool isComposite = false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isComposite = true;
            break;
        }
    }

    if (isComposite) {
        cout << n << " is a composite number.";
    } else {
        cout << n << " is not a composite number.";
    }

    return 0;
}
