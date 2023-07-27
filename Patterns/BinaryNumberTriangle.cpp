#include <iostream>

using namespace std;

int main()
{
    int n, i,j;
    cout<<"Enter number of lines of pattern: ";
    cin >> n;
    int temp = 1;
    for(i=0; i<n; i++){
        if(i%2 == 0){
            temp = 1;
        } else{
            temp = 0;
        }
       for(j=0; j<=i; j++){
            cout<<temp;
            temp = 1 - temp;
        } 
        cout<<"\n";
    }

    return 0;
}