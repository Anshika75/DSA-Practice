// Question: To use self defined comparitive function in sorting
#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &p1, const pair<int,int> &p2){
    return p1.second <= p2.second;
}
int main()
{
    vector<pair<char,int>> vec;
    for (int i=0; i<5; i++){
        auto elm = make_pair('a', 1);
        vec.push_back(elm);
    }
    sort(vec.begin(), vec.end(), cmp);
    //cmp is comparitive function
    for (auto it : vec){
        cout<<it.first<<"  "<<it.second<<endl;
    }
}