#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    for(int i=0;  i<5; i++){
        st.push(i);
    }
    while(!st.empty()){
        int topels = st.top();
        st.pop();
        cout<<topels<<" ";
    }
}