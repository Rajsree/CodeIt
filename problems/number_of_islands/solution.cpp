class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size()-1;
        int n= grid[0].size()-1;
        int islands = 0;
        for(int i=0; i<=m; i++) {
            for(int j=0; j<=n; j++) {
                if(grid[i][j]=='1'){        
                    markIslands(grid, i,j, m,n);
                    islands++;
                }
            }
        }       
        
        return islands;        
    }
    void markIslands(vector<vector<char>> &grid, int i, int j, int m, int n){
        if(i<0 || j<0 || i>m || j > n || grid[i][j]!='1'){
            return;
        }
        grid[i][j] = 2;
        markIslands(grid, i+1, j , m ,n);
        markIslands(grid, i-1, j , m ,n);
        markIslands(grid, i, j+1 , m ,n);
        markIslands(grid, i, j-1, m ,n);
        
    }

};