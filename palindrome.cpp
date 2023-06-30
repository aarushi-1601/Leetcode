// get the length oflargest palindromic sebsequrnce in a given string.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class palindrome {
public:
   int longestPalindrome(string s) {
      unordered_map<char, int> mp;
      for (auto i : s)
         mp[i]++;
      int ma = 0, c = 0, ans = 0;
      for (auto i : mp) {
         if ((i.second) % 2 == 1)
            ma++;
         c += i.second;
      }
      if (ma > 0)
         ma--;
      ans = c - ma;
      return ans;
   }
};
main(){
   palindrome ob;
   cout << (ob.longestPalindrome("ABCDefghhgfeDmomDe"));
}

