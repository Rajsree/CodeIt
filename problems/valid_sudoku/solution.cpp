class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int N = board.size();
        int M = board[0].size();
         int rowset[9][9] = {0}, colset[9][9] = {0}, boxset[9][9] = {0};
 
        for(int r=0; r<N; r++) {
             for(int c=0; c<M; c++) {
                 if(board[r][c] != '.'){
                    int val = board[r][c]-'0'-1;
                    int k = (r/3)*3 + c/3;
                     if(rowset[r][val] || colset[c][val] || boxset[k][val]) {
                         return false;
                     }
                  
                     rowset[r][val] = colset[c][val] = boxset[k][val] = 1;
                 }
             }
        }
        return true;
    }
};