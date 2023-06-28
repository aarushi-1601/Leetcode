#include<iostream>
using namespace std;

int main(){

    int N=10, k;
    cout<<"enter the number of candies to be sold:"<<endl;
    cin>>k;

    if(k==0){
        cout<<"invalid input"<< endl;
        cout<<"Available candies are "<< N;
    }
    else{
        cout<<"no of candies sold "<< k << endl;
        cout<<"no of condies available "<< N-k << endl;
    }

}