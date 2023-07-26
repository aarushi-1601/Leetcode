#include <iostream>
using namespace std;

void printsum(int arr[4][4], int i, int j){
    cout<<"Sum of elements row wise"<<endl;
    for(int i=0; i<4; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            sum+= arr[i][j];
        }
            cout<< sum<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[4][4];
    cout<<"Enter the elements"<<endl;

    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }
 cout<<"Printing the array"<<endl;
    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
 printsum(arr, 4,4);
}