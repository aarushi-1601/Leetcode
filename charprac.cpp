#include <iostream>
using namespace std;

// reverse the string

void reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

// length of the string
int getLength(char name[]){
    int count = 0;
    for (int i=0; name[i] !='\0'; i++){
        count++;
    }

    return count;
}

int main(){

    char name[20];

    cout<<"Enter your name: "<< endl;
    cin>> name;
    // index 2 ke baad terminate ho jayega as null value aagyi uske baad
    //name[2] = '\0';

    cout << "Your name is: " << name << endl;
    //cout<< name << endl;

    int len = getLength(name);
    cout<<"Length of the entered string is: " << len << endl;

    reverse(name,len);
    cout <<"Reverse of the name is: " << name << endl;
    return 0;
}