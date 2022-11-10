#include<iostream>

#include<stack>

using namespace std;

int main()
{

    stack <int> st;

    st.push(10);
    st.push(11);
    st.push(12);
    st.pop();
    st.pop();  

    cout<<st.top() <<endl;

    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
         cout<<"stack is not empty"<<endl;
    }

    return 0;
}