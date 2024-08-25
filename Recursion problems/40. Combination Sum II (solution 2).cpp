class Solution {
public:
    void caluclate(vector<int>&v,vector<int>&tmp,vector<vector<int>>&ans,int start,int target){
        if(target == 0){
        ans.push_back(tmp);
        return ;
      }
      if(start >= v.size() || target<0){
        return ;
      } 
     for(int i = start ;i<v.size();i++){
        if(i >start && v[i] == v[i - 1])continue;
      tmp.push_back(v[i]);
      caluclate(v,tmp,ans,i+1,target - v[i]);
      tmp.pop_back();
     }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>tmp;
        sort(candidates.begin(),candidates.end());
        caluclate(candidates,tmp,ans,0,target); 
        return ans;
    }
};