#include <iostream>
using namespace std;

bool ispresent(int arr[3][4], int target, int i, int j){
for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]== target){
                return 1;
            }
        }
}
return 0;
}

int main(){

    //create 2D array
    int arr[3][4];

// idher row wise input liya hai
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>> arr[i][j];
        }
    }

//print
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<< arr[i][j]<<" ";
        }

        cout<<endl;
    }

    //search krna hai element

    cout<<"Enter the element to search" << endl;
    int target;
    cin>>target;

    if(ispresent(arr,target,3,4)){
        cout<< "Element found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    return 0;
}