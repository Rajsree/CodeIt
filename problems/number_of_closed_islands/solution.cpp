class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
   
        queue<pair<int,int>> q;
        int m=grid.size()-1;
        int n=grid[0].size()-1;
        
      vector<vector<int>> vis(m+1,vector<int>(n+1,0));
        
        int island = 0;
        
        for(int i=0; i<=m; i++){
            for(int j=0; j<=n; j++) {
                if((i*j==0 || i==m || j==n)&& grid[i][j]==0 && vis[i][j]==0)
               {
                    q.push({i,j});
                    vis[i][j]=1;
                  bfs(grid, i, j, m, n, q, vis);
               }     
            }
        }
        
        for(int i=0; i<=m; i++){
            for(int j=0; j<=n; j++) {
                if(grid[i][j]==0 && vis[i][j]==0){              
                    q.push({i,j});
                    vis[i][j]=1;
                    bfs(grid, i, j , m, n, q, vis);
                          island++;
                }
            }
        }
        return island;
    }
    
    void bfs(vector<vector<int>>& grid, int i, int j, int m, int n, queue<pair<int,int>>& q,vector<vector<int>>& vis) {
            while(!q.empty()) {
            int k= q.size();
            int dx[4] = {1,-1,0,0};
            int dy[4] = {0,0,1,-1};
            while(k--) {
                int x = q.front().first, y=q.front().second;
                q.pop();
                for(int i=0; i<4; i++) {
                    int nx = x+dx[i], ny=y+dy[i];
                    if(nx<0 || nx> m || ny<0 || ny>n || grid[nx][ny]!=0 || vis[nx][ny]!=0) {
                        continue;
                    }
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }


            }
        }
    }
};