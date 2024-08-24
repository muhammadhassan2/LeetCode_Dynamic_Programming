https://leetcode.com/problems/subsets-ii/description/

class Solution {
public:
    void compute_subsets(int index , vector<int>&nums,set<vector<int>>&ans , vector<int>an){

    
          if(index == nums.size()){
            sort(an.begin(),an.end());
            ans.insert(an);
            return;
         }
         an.push_back(nums[index]);
         compute_subsets(index+1,nums,ans,an);
         an.pop_back();
         compute_subsets(index+1,nums,ans,an);


    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>an;
        compute_subsets(0,nums,ans,an);
        vector<vector<int>>v;
        for(auto i:ans){
            v.push_back(i);
        }
        return v;
    }
};