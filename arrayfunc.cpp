#include<iostream>
using namespace std;

//function
void printArray(int arr[], int size) {

    cout << "printing array" << endl;

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl;

}
int main(){


int third[15]= {2,7};
int n = 15;
//calling the function
printArray(third, 15);

}