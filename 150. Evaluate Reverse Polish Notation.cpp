class Solution {
public:
    bool c(string s){
        return (s=="+"||s=="-"||s=="*"||s=="/");
    }
    int evalRPN(vector<string>& tokens) {
        stack<string> str;
        string a,b;
        if(tokens.size()==1 and !c(tokens[0])) return stoi(tokens[0]);
        for(auto i=0;i<tokens.size();i++){
            while(i<tokens.size()&&!c(tokens[i])) {
                str.push(tokens[i]);
                i++;
            }
            if(str.size()!=0){
                a=str.top();
                str.pop();
            }
            if(str.size()!=0){
                b=str.top();
                str.pop();
            }
            if(tokens[i]=="+") str.push(to_string(stoll(a)+stoll(b)));
            else if(tokens[i]=="-") str.push(to_string(stoll(b)-stoll(a)));
            else if(tokens[i]=="*") str.push(to_string(stoll(a)*stoll(b)));
            else if(tokens[i]=="/") str.push(to_string(stoll(b)/stoll(a)));
        }
        return stoi(str.top());
    }
};