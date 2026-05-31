#include <iostream>
#include <stack>
#define maxsize 6
using namespace std;
class Stack
{
public:
    int arr[maxsize];
    int idx = -1;

    void push(int x)
    {
        if (isFull())
        {
            cout << "No more insertion is possible ! Stack is full !" << endl;
            return;
        }
        else
        {
            idx++;
            arr[idx] = x;
           
        }
    }
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        else
        {
            return arr[idx];
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        else 
        {
            int top = arr[idx];
            idx--;
            return top;
        }
    }
    void display()
    {
        cout << "Element of the stack : ";
        for (int i = 0 ; i <= idx; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int size()
    {
        return (idx+1);
    }
    bool isEmpty()
    {
        if (idx==-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (idx == maxsize-1)
            return true;
        else
            return false;
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(5);
    st.display();
}
// #include <iostream>
// using namespace std;

// #define MAXSIZE 10   // change this size as needed

// class twoStacks {
//     int arr[MAXSIZE];
//     int top1, top2;

// public:
//     // constructor
//     twoStacks() {
//         top1 = -1;
//         top2 = MAXSIZE;
//     }

//     // push into first stack
//     void push1(int x) {
//         if (top1 + 1 == top2) {
//             cout << "Stack Overflow in S1\n";
//             return;
//         }
//         arr[++top1] = x;
//     }

//     // push into second stack
//     void push2(int x) {
//         if (top2 - 1 == top1) {
//             cout << "Stack Overflow in S2\n";
//             return;
//         }
//         arr[--top2] = x;
//     }

//     // pop from first stack
//     int pop1() {
//         if (top1 == -1) {
//             cout << "Stack Underflow in S1\n";
//             return -1;
//         }
//         return arr[top1--];
//     }

//     // pop from second stack
//     int pop2() {
//         if (top2 == MAXSIZE) {
//             cout << "Stack Underflow in S2\n";
//             return -1;
//         }
//         return arr[top2++];
//     }

//     // display first stack
//     void display1() {
//         cout << "Stack1: ";
//         if (top1 == -1) {
//             cout << "Empty\n";
//             return;
//         }
//         for (int i = 0; i <= top1; i++)
//             cout << arr[i] << " ";
//         cout << endl;
//     }

//     // display second stack
//     void display2() {
//         cout << "Stack2: ";
//         if (top2 == MAXSIZE) {
//             cout << "Empty\n";
//             return;
//         }
//         for (int i = MAXSIZE - 1; i >= top2; i--)
//             cout << arr[i] << " ";
//         cout << endl;
//     }
// };

// int main() {
//     twoStacks ts;

//     ts.push1(5);
//     ts.push1(10);
//     ts.push2(20);
//     ts.push2(30);

//     ts.display1();  // Stack1: 5 10
//     ts.display2();  // Stack2: 30 20

//     cout << "Pop1: " << ts.pop1() << endl;  
//     cout << "Pop2: " << ts.pop2() << endl;  

//     ts.display1();  // Stack1: 5
//     ts.display2();  // Stack2: 20

//     return 0;
// }
