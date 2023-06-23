#include <iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i =0; i<n; i++){
        cout << arr[i] <<" ";
    }cout << endl;
}

void alternateswap(int arr[], int size){

    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }

    }
    
}

int main(){
    int even[8] = {0,2,4,6,8,10,12,14};
    int odd[5] = {100,200,300,400,500};

    alternateswap(even,8);
    printArray(even, 8);

    return 0;
}