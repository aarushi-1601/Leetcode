#include <iostream>  
#include <bits/stdc++.h>  
using namespace std;  

int kth_largest_element(int arr[], int k, int n){  
    sort(arr, arr + n);  
  
 
    reverse(arr, arr+n);  
  
    return arr[k-1];  
}  
  
int main(){  

    int arr[] = {12, 15, 7, 3, 8, 16, 25};  
   
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    int k = 3;  
    cout << "The "<< k << "th largest element = " << kth_largest_element(arr, k, n) << endl;  
    return 0;  
} 