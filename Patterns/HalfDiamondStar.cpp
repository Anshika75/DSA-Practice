#include <iostream>

using namespace std;

int main()
{
    int n, i,j;
    cout<<"Enter number of lines of pattern: ";
    cin >> n;
    for(i=0; i<n; i++){
       for(j=0; j<=i; j++){
            cout<<"*";
        } 
        cout<<"\n";
    }
    for(i=0; i<=n; i++){
       for(j=0; j<=n-i; j++){
            cout<<"*";
        } 
        cout<<"\n";
    }

    return 0;
}