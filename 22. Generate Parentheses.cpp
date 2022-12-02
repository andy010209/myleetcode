class Solution {
public:
    void re(int l,int r,string s,vector<string>& ans){
        if(l==0&&r==0){
            ans.push_back(s);
            return;
        }
        if(l!=0){
            string s1;
            s1=s;
            s1.push_back('(');
            re(l-1,r,s1,ans);
        }
        if(r>l){
            string s2;
            s2=s;
            s2.push_back(')');
            re(l,r-1,s2,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        int l=n;
        int r=n;
        vector<string> ans= {};
        re(l,r,"",ans);
        return ans;
    }
};