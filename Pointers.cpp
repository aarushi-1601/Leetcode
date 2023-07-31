#include<iostream>
using namespace std;

int main(){

    int num=5;

    cout<< num<< endl;

    //Address operator- &

    cout<<"The address of num is: " << &num<< endl;

    int *ptr = &num;
    cout<<"Address is: " <<ptr <<endl;
    cout<<"Value is: " <<*ptr << endl;

    return 0;
}