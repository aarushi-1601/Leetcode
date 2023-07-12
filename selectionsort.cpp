#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void dosort(int arr[], int n){

    for (int i=0; i<n-1; i++){
        int minindex=i;

        for(int j =i+1; j<n; j++){
            if (arr[minindex]>arr[j]){
                minindex = j;
            }
        }
        //if (minindex !=i)
        swap (arr[minindex], arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}

int main(){

    int arr[] = {12,90,45,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    dosort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
