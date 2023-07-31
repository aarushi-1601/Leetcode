#include<iostream>
using namespace std;

int main(){
    //pointer to int is created, and pointing to some garbage address

    //int *p=0;
    //cout<<*p<<endl; 

    //idher kuch bhi change the aayega num mein, increase nhi ho rhi value.
    int num=5;
    int a=num;
    a++;

    cout<< num<< endl;

    //idher ho rhi hai increase.
    int*p = &num;
    cout<<"Before value is: "<<num<<endl;

    (*p)++;
    cout<<"After value is: "<<num<<endl;

    //copying a pointer
    int*q=p;
    cout<< p << "-" << q << endl;
    cout<< *p << "-" << *q << endl;

    //important concept
    int i=3;
    int*t=&i;
    //cout<< (*t)++ << endl;
    *t = *t+1;
    cout<< *t <<endl;
    cout<<"before t"<< t <<endl;
    t=t+1;
    cout<<"after t"<< t <<endl;

    return 0;
}