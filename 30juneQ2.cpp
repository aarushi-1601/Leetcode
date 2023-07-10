//Create a dynammic array and print the first half is asc order and second half in desc order.
//i/p- (1,2,3,4,5)    o/p-(1,2,5,4,3)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printorder(int arr[], int n){

    sort(arr, arr+n);

    for(int i=0; i< n/2; i++)
      cout<<arr[i]<<"";

    for(int j=n-1; j>=n/2; j--)
      cout<<arr[j]<<"";
}

int main()

{
    int arr[] = { 1,2,3,4,5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printorder(arr, n);
 
    return 0;
}