// Print k elements nearest to the value of x, k=4 and x=3
// Therefore print 4 elements(k) which are nearest to the value of x which is 3 in the array
//1,2,3,4,5,6
// this is for unsorted array

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
void printKclosest(int arr[], int n, int x,int k)
{
    
    priority_queue<pair<int, int> > pq;
    for (int i = 0; i < k; i++)
        pq.push({ abs(arr[i] - x), i });
 
    for (int i = k; i < n; i++) {
 
        int diff = abs(arr[i] - x);
 
        if (diff > pq.top().first)
            continue;
 
        pq.pop();
        pq.push({ diff, i });
    }
 
        while (pq.empty() == false) {
        cout << arr[pq.top().second] << " ";
        pq.pop();
    }
}
 
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int X = 3, K = 4;
    int N = sizeof(arr) / sizeof(arr[0]);
     
    printKclosest(arr, N, X, K);
    return 0;
}