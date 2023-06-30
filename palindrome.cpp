// get the length of largest palindromic subsequrnce in a given string.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class palindrome {
   public:
   int longestPalindromeSubseq(string s) {
      string x = s;
      reverse(x.begin(), x.end());
      int n = s.size();
      if(!n) return 0;
      s = " " + s;
      x = " " + x;
      int ret = 0;
      vector < vector <int> > dp(n + 1, vector <int>(n + 1));
      for(int i = 1; i <= n; i++){
         for(int j = 1; j <= n ; j++){
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            if(x[i] == s[j]) {
               dp[i][j] = max(dp[i][j], 1 + dp[i - 1][j - 1]);
            }
         }
      }
      return dp[n][n];
   }
};
main(){
   palindrome ob;
   cout << (ob.longestPalindromeSubseq("ABCDefghhgfeDmomDe"));
}