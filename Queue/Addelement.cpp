#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int element, size,i,choice;
    cout << "Enter numbers of elements in queue: ";
    cin >> size;
    if (q.empty()) {
        cout << "Enter " << 1 << " element: ";
        cin >> element;
        q.push(element); 
        size - 1;
    }
    for(i=0; i<size-1; i++){
        cout << "Enter " << i+2 << " element: ";
        cin >> element;
        q.push(element); 
    }
    
    cout << "Enter 1 to add an element or 0 to exit: ";
    cin >> choice;
    while(choice == 1){
        cout << "Enter " << q.size() + 1 << " element: ";
        cin >> element;
        q.push(element);
        cout << "Enter 1 to add an element or 0 to exit: ";
        cin >> choice;
    }
    
    cout << "Elements in the queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
