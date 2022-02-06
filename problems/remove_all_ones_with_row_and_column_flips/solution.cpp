class Solution {
public:
    bool removeOnes(vector<vector<int>>& grid) {
        int m=grid.size()-1;
        int n=grid[0].size()-1;
        //If column in row[0] is 1 -> flip the column
        for(int j=0; j<=n; j++) {
            if(grid[0][j]==1) {
                
                //Flip the column
                for(int i=0; i<=m; i++) {
                  grid[i][j] = !grid[i][j];   
                }
            }
        }
        
        //Count 1's and 0's in each row
        for(int i=1; i<=m; i++) {
                 int sum = 0;
            for(int j=0; j<=n; j++){
                sum+=grid[i][j];            
            }
          
            if(sum!=0 && sum!=n+1) {            
                return false;
            }
        }
        return true;
    }
};

/* 
1. flip column in row [0] with 1
2. rows whould have all 0's or 1's
*/