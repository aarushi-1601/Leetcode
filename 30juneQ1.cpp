// Print the subsets(there count) whose product is less than or equal to given value k.
//count=8, k=12
//i/p- (2,4,5,3)      o/p- (2),(4),(5),(3),(2,4),(2,5),(2,3),(4,3)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int findSubset(long long int arr[], int n,
               long long int k)
{
    vector<long long int> vect1, vect2, subset1, subset2;
 
    for (int i = 0; i < n; i++) {
 
        if (arr[i] > k)
            continue;
        if (i <= n / 2)
            vect1.push_back(arr[i]);
        else
            vect2.push_back(arr[i]);
    }
 
    for (int i = 0; i < (1 << vect1.size()); i++) {
        long long value = 1;
        for (int j = 0; j < vect1.size(); j++) {
            if (i & (1 << j))
                value *= vect1[j];
        }
 
        if (value <= k)
            subset1.push_back(value);
    }
 
    for (int i = 0; i < (1 << vect2.size()); i++) {
        long long value = 1;
        for (int j = 0; j < vect2.size(); j++) {
            if (i & (1 << j))
                value *= vect2[j];
        }

        if (value <= k)
            subset2.push_back(value);
    }

    sort(subset2.begin(), subset2.end());
 
    long long count = 0;
    for (int i = 0; i < subset1.size(); i++)
        count += upper_bound(subset2.begin(), subset2.end(),(k / subset1[i]))- subset2.begin();
 
    count--;

    return count;
}
 
int main()
{
    long long int arr[] = { 2,4,5,3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    long long int k = 12;
    cout << findSubset(arr, n, k);
    return 0;
}

