/******
@autor muhammad hassan

@time 24/8/2024

time complexity  O(n) where n is the size of array

space complexity = O(1)
https://leetcode.com/problems/house-robber/

/******
class Solution {
public:
    int calc(const vector<int>&v ,int idx,vector<int>&dp){
          if(idx >= v.size()){
            return 0;
          }
          if(dp[idx] != -1){
              return dp[idx];
          }
         dp[idx] = max(calc(v,idx+2,dp) + v[idx], calc(v,idx+1,dp));
         return dp[idx];
    }
    int rob(vector<int>& nums) {
          vector<int>dp(nums.size(),-1);
        return calc(nums,0,dp);
    }
};