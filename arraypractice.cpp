#include<iostream>
using namespace std;

int main()
{

    // declare
    int array[15];

    // accessing array
    cout << "value at index 1 is" << array[1] <<endl;

    //initialsing an array
    int second[4]={1,2,3,4};

    //accessing an element
    cout << "value at 2 index is " << second[2] << endl;
    int third[15] = {2,7};
    int n=15;
    cout<<"printing the array"<< endl;
    //print the array
    for(int i=0; i<n; i++) {
        cout<< third[i] << "";
    
    }

    return 0;
}