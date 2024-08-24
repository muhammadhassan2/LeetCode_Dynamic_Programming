/*****
@autor muhammad hassan

@date 24/8/2024

time complexity is O(length * n)
space complexity is O(n^2) where n is the length of the string 
*****/

class Solution {
public:
    int dp[1001][1001];

    int longestPalindromeSubseq(string s) {
      
          for(int i=0;i<1001;i++){
            dp[i][i] = 1;
          }
      for(int len = 2;len<=s.size();len++){
        for(int i = 0;i<=s.size() - len;i++){
            int j = len + i -1;
            if(s[i] == s[j]){
                dp[i][j] = 2 + dp[i +1][j-1];
            }
            else{
                dp[i][j] = max(dp[i+1][j],dp[i][j-1]);
            }

        }
      }
      return dp[0][s.size()-1];
    }
};