// You have to find the leaders in array according to the right element should be less than the left element

#include <iostream>
using namespace std;

void printLeaders(int arr[], int size){

    for(int i=0; i<size; i++){
        
        int j;

        for(j=i+1; j<size; j++){
            if(arr[i]<=arr[j])
            break;
        }
        if(j==size)
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10,3,2,21,1,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}