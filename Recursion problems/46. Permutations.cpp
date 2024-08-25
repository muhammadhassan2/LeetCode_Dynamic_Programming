class Solution {
public:
    int visited[1001];
    void calculate(vector<int>&v,vector<int>&tmp,vector<vector<int>>&ans,int start){
         if(tmp.size() == v.size()){
            ans.push_back(tmp);
            return ;
         } 
        for(int i = 0;i<v.size();i++){
            if(visited[i])continue;
            visited[i] = 1;
            tmp.push_back(v[i]);
            calculate(v,tmp,ans,i+1);
            tmp.pop_back();
            visited[i] =0 ;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int>tmp;
         calculate(nums,tmp,ans,0);
         return ans;
    }
};