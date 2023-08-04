#include<iostream>
using namespace std;

int main(){

    int arr[10]={2,5,6};
     cout<<"Address of first memory block is " <<arr<<endl;
     cout<<"Address of first memory block is " <<&arr[0]<<endl;

    cout<<"a"<<*arr<<endl;
    cout<<"b"<<*(arr+1)<<endl;
    cout<<"c"<<*(arr+2)<<endl;
    cout<<"d"<<*(arr+2)+1<<endl;


    int i=2;
    cout<<i[arr]<<endl;

    return 0;
}