class Solution {
public:
    unordered_set<string> str;
    vector<string> ans;
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        for(auto w:wordDict) str.insert(w);
        r(s,0,n,"");
        return ans;
    }
    void r(string& s, int i, int n,string c){
        if(i==n){
             c.pop_back();
             ans.push_back(c);
             return;
        }
        for(int j=i;j<n;j++){
            if(str.count(s.substr(i,j-i+1))){
                r(s,j+1,n,c+s.substr(i,j-i+1)+' ');
            }
        }
    }
};