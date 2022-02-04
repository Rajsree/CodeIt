class Solution {
public:
    queue<pair<int,int>> way;
    void wallsAndGates(vector<vector<int>>& rooms) {
        // int dis
        int m= rooms.size()-1;
        int n= rooms[0].size()-1;
        int count = 0;
        for(int i=0; i<=m; i++) {
            for(int j=0; j<=n; j++) {
                if(rooms[i][j] == 0) {
                     // helper(rooms, i,j,m,n, count);
                    way.push({i,j});
                }
            }
        }
        while(!way.empty()) {
            int k= way.size();
            count++;
            int dx[4] = {-1,1,0,0};
            int dy[4] = {0,0,-1,1};
            // int count = 0;
            while(k--) {
                 // count++;
                int x = way.front().first;
                int y = way.front().second;
                way.pop();
                for(int i=0; i<4; i++) {
                    int nx = x + dx[i];
                    int ny = y+ dy[i];
                    
                    if(nx<0 || nx>=m+1 || ny<0 || ny>=n+1 || rooms[nx][ny]<count) {
                        continue;
                    }
                    
                    rooms[nx][ny] = count;
                    way.push({nx,ny});
                }
                
            }
            // if(!way.empty()) count++;
        }
        
     
    }
 
};