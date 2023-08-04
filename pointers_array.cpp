#include<iostream>
using namespace std;

int main(){

    int arr[10]={2,5,6};
     cout<<"Address of first memory block is " <<arr<<endl;
     cout<<"Address of first memory block is " <<&arr[0]<<endl;

    cout<<""<<*arr<<endl;
    return 0;
}