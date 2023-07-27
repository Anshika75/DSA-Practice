#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k;
    cout<<"Enter number of lines of pattern: ";
    cin >> n;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            cout<<" ";
        } 
        for(j=0; j<2*i+1; j++){
            cout<<"*";
        }
        for(j=0; j<n-i-1; j++){
            cout<<" ";
        } 
        cout<<"\n";
    }
    return 0;
}
