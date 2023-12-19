// Question: Enter your name and count the occurence of each character in the name in ordered way
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    map<char,int> mp;
    for(auto chr : name){
        mp[chr]++;
    }
    for(auto it : mp){
        cout<<it.first<<" has count "<<it.second<<endl;
    }
}