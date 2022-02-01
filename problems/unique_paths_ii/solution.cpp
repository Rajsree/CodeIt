class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size()-1;
        int n = obstacleGrid[0].size()-1;
        
        vector<vector<int>> dp(m+2,vector<int>(n+2,-1));
        
        return helper(0,0,obstacleGrid, m,n, dp);   
    }
    int helper(int i, int j, vector<vector<int>>& obstacleGrid, int m,int n, vector<vector<int>>& dp) {
        
        if(dp[i][j] != -1) return dp[i][j];
        if(obstacleGrid[m][n]==1) return 0;
        if(i==m && j==n) return 1;
        if(i>m || j>n) return 0;
        if(obstacleGrid[i][j]==1) return 0;
        else return dp[i][j] = helper(i+1,j,obstacleGrid, m,n, dp)+helper(i,j+1,obstacleGrid, m,n, dp);  
    }

};