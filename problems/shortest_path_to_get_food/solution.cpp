class Solution {
public:
    queue<pair<int,int>> way;
    int getFood(vector<vector<char>>& grid) {
        int m= grid.size()-1;
        int n= grid[0].size()-1;
         int dist = 0;
        for(int i=0; i<=m; i++) {
            for(int j=0; j<=n; j++) {
                if(grid[i][j]=='*'){
                    way.push({i,j});
                }
               
            }
        }
        
        while(!way.empty()) {
            int k = way.size();
            dist++;
            while(k--) {
                pair<int,int> top=way.front();
                int x = top.first;
                int y = top.second;
                way.pop();
                
                int dx[4] = {-1,1,0,0};
                int dy[4] = {0,0,1,-1};
                
                for(int i=0; i<4; i++) {
                    int nx = x+dx[i];
                    int ny=y+dy[i];
                    
                    if(nx<0 || nx>m || ny<0 || ny>n || grid[nx][ny]=='X') {
                        continue;
                    }
                    
                    if(grid[nx][ny]=='#') {
                        return dist;
                    }
                
                    grid[nx][ny] = 'X';
                    
                    way.push({nx,ny});
                    
                    
                }
            }
        }
        return -1;
    }
};



/*

m,n
start * , end #,

i,j 
adja

if(food)=>dist

if(n) -1 */