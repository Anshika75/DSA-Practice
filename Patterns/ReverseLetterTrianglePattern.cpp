#include <iostream>

using namespace std;

int main()
{
    int n, i;
    char j;
    cout<<"Enter number of lines of pattern: ";
    cin >> n;
    for(i=n; i>0; i--){
        for(j='A'; j<'A'+i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}