#include<iostream>
using namespace std;

int main(){


    //**size in case of arr and ptr(1st difference//**

    //int arr[10]={23, 122, 41, 67};

    // int temp[10];
    // cout<<sizeof(temp)<<endl;

    // int*ptr=&temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;

    //**difference with the & operator//**

    // int a[20]={1,2,3,5};
    // cout<<"& operator array "<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;

    // int*p=&a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<"& operator pointer "<<&p<<endl;

    //**Symbol difference//**

    int arr[10];

    //ERROR
    //arr=arr+1;

    int *ptr=&arr[0];
    ptr=ptr+1;
    cout<< ptr << endl; 

    return 0;
}