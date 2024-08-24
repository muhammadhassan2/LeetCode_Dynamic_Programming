class Solution {
public:
    void calculate(vector<int>&v,vector<int>&tmp,vector<vector<int>>&ans,int idx,int target){
        
        if(target == 0){
            ans.push_back(tmp);
            return;
        }
        if(idx >= v.size()){
            return ;
        }
         if(target>=v[idx]){
         tmp.push_back(v[idx]);
         calculate(v,tmp,ans,idx,target - v[idx]);
         
         tmp.pop_back();
         }
         calculate(v,tmp,ans,idx+1,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>tmp;
        calculate(candidates,tmp,ans,0,target);
        return ans;
    }
};