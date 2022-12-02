class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        vector<int> ans(rowIndex+1);
        ans[0]=ans[1]=1;
        for(int i=2;i<rowIndex+1;i++){
            for(int j=i-1;j>0;j--){
                ans[j]=ans[j]+ans[j-1];
            }
            ans[i]=1;
        }
        return ans;
    }
};