#include <iostream>

using namespace std;

int main()
{
    int n, i,j, temp;
    cout<<"Enter number of lines of pattern: ";
    cin >> n;
    temp = 2*(n-1);
    for(i=0; i<n; i++){
        for(j=1; j<=i; j++){
            cout<<j;
        }
        for(j=0; j<temp; j++){
            cout<<" ";
        }
        for(j=i; j>0; j--){
            cout<<j;
        }
        cout<<"\n";
        temp-=2;
    }

    return 0;
}