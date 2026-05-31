#include<iostream>
#include<string>
#include<stack>
#include<climits>
using namespace std;
class MinStack {
public:
    stack<long long> st;
    long long min ;
    MinStack() {
        min = LLONG_MAX;
    }
    
    void push(int val) {
        long long x = (long long)val;
        if(st.empty())
        {
            st.push(x);
            min = x;
        }
        else if(x >= min) st.push(x);
        else // val < min : we have to update our mininum 
        {
            long long farzi = 2*x - min;
            st.push(farzi);
            min = x;
        }
    }
    
    void pop() {
        if(st.top()>=min) st.pop();
        else // st.top() < min : that's not possible this implies its farzi top : restore old min
        {
            long long oldMin = 2*min - st.top();
            min = oldMin;
            st.pop();
        }
    }
    
    int top() {
        if(st.top()<min) return int(min);
        return int (st.top());
    }
    
    int getMin() {
        return int(min);
    }
};
