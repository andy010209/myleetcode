class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits=="") return ans;
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int i=0;
        string s;
        solve(digits,ans,s,map,i);
        return ans;
    }
    
    void solve(string digits, vector<string> &ans, string s, string *map, int i){
        if(i>=digits.length()){
            ans.push_back(s);
            return;
        }
        int n=digits[i]-'0';
        string cur=map[n];
        for(int k=0;k<cur.length();k++){
            s.push_back(cur[k]);
            solve(digits,ans,s,map,i+1);
            s.pop_back();
        }
        
    }
};