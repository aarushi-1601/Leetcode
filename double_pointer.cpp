#include <bits/stdc++.h>
using namespace std;

void update(int **p2)
{
    //p2=p2+1
    //any change- NO

    // *p2=*p2+1
    //any change- YES

    //**p2=**p2+1
    //any change- YES
}
int main(){
    int i=5;
    int* p=&i;
    int** p2=&p;

    cout<<endl << endl <<"All good"<< endl<< endl;

    cout<<"printing p"<<p<<endl;
    cout<<"address of p"<<&p<<endl;


    return 0;
}