#include<iostream>
#include<stack>
using namespace std;
// void print(stack<int>st){
//     if(st.size()==0) return;
//     print(st);

// }
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    while(st.size()!=0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    cout<<endl;
    while(st.size()!=0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}