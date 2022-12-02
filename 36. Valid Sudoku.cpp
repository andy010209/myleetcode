class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> row[9];
        unordered_map<char,int> col[9];
        unordered_map<char,int> sqr[9];
        int x;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                x=board[i][j];
                if(x!='.'&&(row[i][x]++>0||col[j][x]++>0||sqr[i/3*3+j/3][x]++>0))
                    return 0;
            }
        }
        return 1;
    }
};