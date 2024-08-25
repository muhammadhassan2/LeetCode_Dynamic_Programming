
class Solution {
public:
    void caluclate(vector<int>&v,vector<int>&tmp,vector<vector<int>>&ans,int idx,int target){
        if(target == 0){
        ans.push_back(tmp);
        return ;
      }
      if(idx >= v.size() || target<0){
        return ;
      } 
     
      tmp.push_back(v[idx]);
      caluclate(v,tmp,ans,idx+1,target - v[idx]);
      tmp.pop_back();
      while(idx+1 <v.size() &&v[idx] == v[idx+1]){
        idx++;
      }
      caluclate(v,tmp,ans,idx+1,target);
      
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>tmp;
        sort(candidates.begin(),candidates.end());
        caluclate(candidates,tmp,ans,0,target); 
        return ans;
    }
};