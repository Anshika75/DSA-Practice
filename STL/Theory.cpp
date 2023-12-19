// STL -> Standard Template Library
// STL is a library of generic classes and functions
// that can be used for storing and manipulating data
// in a C++ program
// STL is a collection of classes and functions
// written in template form
// STL is a library of container classes, algorithms,
// and iterators
#include<bits/stdc++.h>
//Have all the libraries included in one header file
//no need to individually include them
using namespace std;
//using namespace std; -> This statement tells the compiler
//to use the std namespace
//std -> standard
//namespace -> collection of classes and functions
//std namespace contains all the classes and functions
//of the standard library
////////////////////////////////////////////////////////////////////
//LESSON 2.1 - FUNCTIONS OF STL
//1. swap() -> swaps the values of two variables
//2. min() -> returns the minimum of two values
//3. max() -> returns the maximum of two values
//4. sort() -> sorts the elements of a container
//5. reverse() -> reverses the elements of a container
//6. accumulate() -> returns the sum of all the elements
//of a container
//7. count() -> returns the number of times a value
//appears in a container
//8. find() -> returns an iterator to the first
//occurrence of a value in a container
//9. binary_search() -> returns true if a value
//exists in a sorted container
//10. lower_bound() -> returns an iterator to the
//first element that is not less than a value
//11. upper_bound() -> returns an iterator to the
//first element that is greater than a value
//12. next_permutation() -> returns true if the
//next permutation exists
//13. prev_permutation() -> returns true if the
//previous permutation exists
////////////////////////////////////////////////////////////////////
//EXAMPLE 1
int sum(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Sum is: "<<sum(a,b)<<endl;
    swap(a,b);
    cout<<"After swapping"<<endl;
    cout<<"a is: "<<a<<endl<<"b is: "<<b<<endl;
    cout<<"Min is: "<<min(a,b)<<endl;
    cout<<"Max is: "<<max(a,b)<<endl;
    return 0;
}

////////////////////////////////////////////////////////////////////
//LESSON 2.2 - PAIR
//pair is a container that can be used to bind
//together a group of values
//Nested pairs can be used to bind together
//multiple values
////////////////////////////////////////////////////////////////////
//EXAMPLE 2

void explainPair(){
    pair<int,int> p = {1,3};
    cout<<"First pair is {1,3}"<<endl;
    cout<<"First value is: "<<p.first<<" Second value is: "<<p.second<<endl;
    cout<<"Second pair is {1,{3,4}}"<<endl;
    pair<int,pair<int,int>> p1 = {1,{3,4}};
    cout<<"First value is: "<<p1.first<<" First value of second pair is: "<<p1.second.first<<" Second value of second pair is: "<<p1.second.second<<endl;
    cout<<"Third pair is {{1,2},{2,5},{5,1}}"<<endl;
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout<<"Iterating over the array"<<endl;
    cout<<arr[0].first<<endl;
    cout<<arr[0].second<<endl;
    cout<<arr[1].first<<endl;
    cout<<arr[1].second<<endl;
    cout<<arr[2].first<<endl;
    cout<<arr[2].second<<endl;
}

//LESSON 2.3 - VECTOR
//vector is a sequence container and also known
//as Dynamic Array or Array List
//Its size can grow and shrink dynamically
//in accordance with the elements that are
//inserted or deleted from it
//It is similar to an array with the exception
//that it grows its size automatically as new
//elements are inserted in it
//Elements can be inserted at the end, in the
//middle or in the beginning
//It provides random access to its elements
//push_back() -> adds an element at the end
//emplace_back() -> constructs the element in-place
//at the end, faster than push_back()
//in push_back() curly braces are used to 
//initialize the element in pair
//in emplace_back() normal brackets are used
//to initialize the element in pair
//pop_back() -> removes the last element
//insert() -> inserts new elements before the element
//at the specified position
//we can increase the size even after the vector is defined
//iterator is a pointer that points to a particular element in the vector
//begin() returns an iterator pointing to the first element of the vector
//end() returns an iterator pointing to the last element of the vector
//initially it will print the memory address of the first element
//to print the value of the first element we use *it

//EXAMPLE 3

void explainVector(){
    vector<int> v;
    cout<<"Initial size of vector is: "<<v.size()<<endl;
    v.push_back(1);
    cout<<"Size after inserting 1 is: "<<v.size()<<endl;
    v.emplace_back(2);
    cout<<"Size after inserting 2 is: "<<v.size()<<endl;
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(2,3);
    cout<<"Size after inserting pair is: "<<vec.size()<<endl;
    vector<int> v1(5,100);
    //container containing 5 elements with value 100 is defined
    vector<int> v2(5);
    //container containing 5 elements with value 0 or any other garbage value is defined
    vector<int> v3(5, 20);
    //container containing 5 elements with value 20 is defined
    vector<int> v4(v3);
    //container containing elements of v1 is copied to v2
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";

}