#include <iostream>
using namespace std;

int sumarr(int arr[],int n){
    int sumarr=0;
    for(int i=0; i<n; i++)
        sumarr+=arr[i];

    return sumarr;
}

int main(){
    int arr[]={1,2,34,5};
    int n =sizeof(arr)/sizeof(arr[0]);

    cout<<"sum of all the elements in the array is: "<<sumarr(arr,n);
    return 0;

}