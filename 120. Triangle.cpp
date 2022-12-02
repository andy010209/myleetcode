class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int> l(triangle.back());
        for(int level=n-2;level>=0;level--){
            for(int i=0;i<=level;i++){
                l[i]=min(l[i],l[i+1])+triangle[level][i];
            }
        }
        return l[0];
    }
};