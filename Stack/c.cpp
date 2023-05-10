#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    stack<char> st;
    st.push('a');
    st.push('b');
    st.push('c');
    st.push('d');
    st.pop();
    char g = st.top();
    cout<<g<<endl;

return 0;
}