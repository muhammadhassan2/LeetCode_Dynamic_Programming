/***
@autor muhammad hassan
@time 24/8/2024

time complexity = O(n * m) where n is the size of first string  , m is the size of the second string 
space complexity = O(n * m)

*****/
class Solution {
public:
    int dp[1001][1001];
    int lcs(string A , string B , int i ,int j){
            if(i >= A.size() || j >=B.size()){
                return 0;
            }
        if(dp[i][j]!= 0){
            return dp[i][j];
        } 
        if(A[i] == B[j]){
            dp[i][j] = lcs(A ,B ,i + 1 , j +1) +1;
        }    
        else if(A[i] != B[j]){
            dp[i][j] = max(lcs(A,B,i + 1 ,j),lcs(A,B,i ,j+1));
        }
        return dp[i][j];


    }
    int longestCommonSubsequence(string text1, string text2) {
        return lcs(text1,text2,0,0);
    }
};