class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;

        int m = grid.size()-1;
        int n= grid[0].size()-1;
        
        vector<vector<char>> vis(m+2, vector<char>(n+2,'-1'));
        
        queue<pair<int,int>> q;
        for(int i=0; i<=m; i++){
            for(int j=0; j<=n; j++) {
                if(grid[i][j]=='1'){
                    q.push({i,j});
                    islands++;
                    
                while(!q.empty()) {
                    int k= q.size();
                    int dx[4] = {1,-1,0,0};
                    int dy[4] = {0,0,1,-1};

                    while(k--) {
                        pair<int,int> front = q.front();               
                        q.pop();
                        int x = front.first, y = front.second;              
                        for(int i=0; i<4; i++) {                    
                            int nx =x+dx[i], ny=y+dy[i];                    
                            if(nx<0 || nx>m || ny<0 || ny>n || grid[nx][ny]=='0'){
                                continue;
                            }                    
                            grid[nx][ny] = '0';
                            q.push({nx,ny});                    
                        }              
                    }                
                 }
                }
            }
        }
        

        
        // for(int i=0; i<=m; i++) {
        //     for(int j=0; j<=n; j++) {
        //         cout << vis[i][j];
        //     }
        // }
        
        return islands;
    }
};