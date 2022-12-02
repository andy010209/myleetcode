class Solution {
public:
    bool isValid(string s) {
        int n=0;
        if(s.size()==1) return 0;
        stack<char> c;
        for(int i=0;i<s.size();i++){
            if(s[i]=='{'||s[i]=='['||s[i]=='('){
                c.push(s[i]);
            }
            else{
                if(c.empty()||(c.top()=='{'&&s[i]!='}')||(c.top()=='['&&s[i]!=']')||(c.top()=='('&&s[i]!=')')){
                    return 0;
                }
                c.pop();
            }
        }
        return c.empty();
    }
};