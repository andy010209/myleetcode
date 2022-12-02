class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int a=0;a<matrix.size();a++){
            reverse(matrix[a].begin(),matrix[a].end());
        }
    }
};