#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k;
    cout<<"Enter number of lines of pattern: ";
    cin >> n;
    for(i=0; i<=n; i++){
        k=1;
       for(j=0; j<n-i; j++){
            cout<<k;
            k++;
        } 
        cout<<"\n";
    }

    return 0;
}