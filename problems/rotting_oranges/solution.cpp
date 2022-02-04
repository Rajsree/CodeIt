class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int m = grid.size()-1;
        int n= grid[0].size()-1;
        queue<pair<int,int>> rotten;
        int min = 0, tot=0, cnt=0;
        for(int i=0; i<=m; i++) {
            for(int j=0; j<=n; j++) {
                if(grid[i][j]!=0) {
                    tot++;
                    if(grid[i][j]==2) {
                        rotten.push({i,j});
                    }
                }
            }
        }
        while(!rotten.empty()){
            int k = rotten.size();
            cnt+=k;
            while(k--){
            int dx[4] = {-1,1,0,0};
            int dy[4] = {0,0,-1,1};
            
                int x = rotten.front().first;
                int y = rotten.front().second;
                rotten.pop();
            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                // rotten.pop();
                if(nx<0 || nx>=m+1 || ny<0 || ny>=n+1 || grid[nx][ny]!=1) {
                    continue;
                }
                
                grid[nx][ny] = 2;
                rotten.push({nx,ny});
                
            }
          
            }
            if(!rotten.empty()) min++;
        }
        return tot==cnt ? min : -1;;
    }    

};