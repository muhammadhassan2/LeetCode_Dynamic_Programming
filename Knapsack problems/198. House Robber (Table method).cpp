/******
@autor muhammad hassan

@time 24/8/2024

time complexity  O(n) where n is the size of array

space complexity = O(1)
https://leetcode.com/problems/house-robber/

/******
class Solution {
public:
    int rob(vector<int>& nums) {
          vector<int>dp(nums.size() +1 ,0);
          // base case
          if(nums.size() == 0)return 0;
          if(nums.size() == 1) return nums[0];
           
           dp[0] = nums[0];
           dp[1] = max(nums[0],nums[1]);

           for(int i = 2 ;i<nums.size();i++){
            dp[i] = max(dp[i-2] + nums[i],dp[i-1]);
           }
           return dp[nums.size() -1];

    }
};