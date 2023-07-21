#include <iostream>
using namespace std;

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

    cout<<"Length of the entered string is: " << getLength(name) << endl;

    return 0;
}