class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> a;
        for(auto i:nums) a.push_back(to_string(i));
        sort(begin(a),end(a),[](string &s1,string &s2){return s1+s2>s2+s1;});
        string ans;
        for(auto s:a) ans+=s;
        while(ans[0]=='0'&&ans.length()>1) ans.erase(0,1);
        return ans;
    }
};