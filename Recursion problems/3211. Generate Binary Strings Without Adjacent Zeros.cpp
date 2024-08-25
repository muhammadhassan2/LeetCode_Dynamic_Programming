class Solution {
public:
    void calculate(vector<string>&ans , int i ,int n,string s){
         if(s.size() == n){
         //   if(count(s.begin(),s.end(),'1')>=1)
            ans.push_back(s);
            return ;
         }
         if(i >= n ){
          //  return ;
         }
         s.push_back('1');
        calculate(ans,i+1,n,s);
        s.pop_back();

        if(s.empty()||s.back() != '0'){
            s.push_back('0');
            calculate(ans,i+1,n,s);
            s.pop_back();
        }
         
    }
    vector<string> validStrings(int n) {
        vector<string>s;
        calculate(s,0,n,"");
        return s;
    }
};