class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m][n];           
   
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++ ){
                if(i==0 && j==0) {
                    dp[i][j] = 1;
                } else {
                    int up=0, right=0;
                    if(i>0)  up = dp[i-1][j];
                    if(j>0) right = dp[i][j-1];
                    dp[i][j] = up+right;   
                }
      
            }
        }
        
        return dp[m-1][n-1];
    }
   
/*    int helper(int i, int j, int m, int n, vector<vector<int>>& dp) {
         if(i>=m || j>=n) return 0;
        if(i==m-1 && j==n-1)  return 1;
       
        if(dp[i][j] !=-1) return dp[i][j];

        return dp[i][j] = helper(i+1,j,m,n,dp)+helper(i,j+1,m,n,dp);
     
    }*/

};

/*class Solution {
    public:
    int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r=m-1;
        double res = 1;
        for(int i=0; i<=r; i++) {
            res = res * (N-r+i)/i ;
        }
        int y = (int)round(res);
        return y;
    }
};*/