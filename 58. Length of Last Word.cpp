class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter=0;
        int i=1;
        if(s.size()==1){
            if(s[0]!=' ') return 1;
            else return 0;
        }
        if(s[0]!=' ') counter++;
        while(i<s.length()){
            if(s[i]!=' '){
                if(s[i-1]==' ') counter=0;
                counter++;
            }
            i++;
        }
        return counter;
    }
};