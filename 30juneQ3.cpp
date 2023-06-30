//Check whether the stringB is exactly obtained by rotating stringA by exactly 2 places
//string1- amazon   string2-azonam

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isrotated(string str1, string str2){
    if(str1.length()!=str2.length())
    return false;
    if(str1.length()<2){
        return str1.compare(str2) == 0;
    }
    string clock_rot = "";
    string anticlock_rot = "";
    int len = str2.length();

    anticlock_rot = anticlock_rot +
                    str2.substr(len-2, 2) +
                    str2.substr(0, len-2) ;
 
    clock_rot = clock_rot +
                str2.substr(2) +
                str2.substr(0, 2) ;

    return (str1.compare(clock_rot) == 0 ||
            str1.compare(anticlock_rot) == 0);
}
 
int main()
{
    string str1 = "amazon";
    string str2 = "azonam";
 
    isrotated(str1, str2) ? cout << "True"
                          : cout << "False";
    return 0;
}
