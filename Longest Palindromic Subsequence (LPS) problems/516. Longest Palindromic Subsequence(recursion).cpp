/*****
@autor muhammad hassan

@date 24/8/2024

time complexity is O(length * n)
space complexity is O(n^2) where n is the length of the string 
*****/

class Solution {
public:
    int dp[1001][1001];
    int calc(string &s , int i ,int j){
           // base case 
           if(i >= s.size() || j < 0 || i>j){
            return 0;
           }
           // means that the letter is a palindrom
           if( i == j){
            return 1;
           }
            if(dp[i][j] != 0){
                return dp[i][j];
            }

           if(s[i] == s[j]){
              dp[i][j] =calc(s, i +1, j -1) + 2;
           }
           else{
            dp[i][j] = max(calc(s, i + 1, j ),calc(s, i , j -1));
           }
          
          return dp[i][j];

    }

    int longestPalindromeSubseq(string s) {
        

        return calc(s,0,s.size()-1);
    }
};