// Question: Take input of characters in set and print it in reverse order
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<char> a;
    int i,n;
    char x;
    cout<<"Enter the length of array: ";
    cin>>n;
    for (i=0; i<n; i++){
        cout<<"Enter the element: ";
        cin>>x;
        a.insert(x);
    }
    
    auto itr = a.end();
    itr --;
    cout<<"Array is:\n";
     for (; itr != a.begin(); itr--) {
        cout << *itr << " ";
    }
    cout<<*a.begin();
}