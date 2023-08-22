#include<iostream>
using namespace std;

// int main(){

// int i=5;

// // create a ref variable
// int & j=i;

// cout<<i<<endl;
// i++;
// cout<<i<<endl;
// j++;
// cout<<i<<endl;

//     return 0;
// }

int getsum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;

    //variable size array
    int* arr=new int[n];

    //taking input in array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=getsum(arr,n);

    cout<<"Answer is "<<ans<<endl;

    return 0;
}