#include<iostream>
using namespace std;

int largestRowsum(int arr[5][5], int i, int j){
     int maxi = INT_MIN;
     int row_index=-1;

     for (int i=0; i<5; i++){
        int sum=0;
        for(int j=0; j<5; j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            row_index=i;
        }
     }
     cout<<"The maximum sum of the rows is:"<<maxi<<endl;
     return row_index;
}
int main(){
    int arr[5][5];
    cout<<"Enter the elements"<<endl;

    for(int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            cin >> arr[i][j];
        }
    }

 cout<<"Printing the array"<<endl;
    for(int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int ans=largestRowsum(arr,5,5);
    cout<<"Max sum of row is at index"<<ans<<endl;
   return 0;
}