// Question: Take input from user, push it in the vector and print it
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int i,n,x;
    cout<<"Enter the length of array";
    cin>>n;
    for (i=0; i<n; i++){
        cout<<"Enter the element";
        cin>>x;
        v.push_back(x);
    }
    auto it = v.begin();
    for(i=0; i<n; i++){
        
        cout<<*it<<" ";
        it++;
    }
}
