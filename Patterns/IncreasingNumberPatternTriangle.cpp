#include <iostream>

using namespace std;

int main()
{
    int n, i,j, num;
    cout<<"Enter number of lines of pattern: ";
    cin >> n;
    num=1;
    for(i=0; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<num;
            num++;
        }
        cout<<"\n";
    }

    return 0;
}