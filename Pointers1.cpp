#include<iostream>
using namespace std;

int main(){
    //pointer to int is created, and pointing to some garbage address

    //int *p=0;
    //cout<<*p<<endl; 

    int num=5;
    int a=num;
    a++;

    cout<< num<< endl;

    return 0;
}