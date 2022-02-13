class Solution {
	public :
int shortestPath(vector<vector<int>>& grid, int k) {
        queue<vector<int>> way;
        vector<vector<int>> vis(grid.size(), vector<int>(grid[0].size(),-1));
        
        int m = grid.size()-1;
        int n = grid[0].size()-1;  
        
        if(m==0 && n==0) return 0;
        way.push({0,0, 0, k}); //x, y , dist, k obstacles
        
        while(!way.empty()) {          
                auto top = way.front();
                int x = top[0];
                int y = top[1];                            
                way.pop();
              
                if(x < 0 || x >= m+1 || y <0 || y >= n+1){
                    continue;
                }

            

                if(x==m && y==n) {
                    return top[2];
                }
            
                if(grid[x][y]==1) {
                    if(top[3]>0) {
                        top[3]--;
                    } else {
                        continue;
                    }
                }

                if(vis[x][y]!=-1 && vis[x][y]>=top[3]) {
                    continue;
                }
                vis[x][y]=top[3];

                way.push({x+1,y,top[2]+1, top[3]});
                way.push({x-1,y,top[2]+1, top[3]});
                way.push({x,y+1,top[2]+1, top[3]});
                way.push({x,y-1,top[2]+1, top[3]});           
                   
        }
        return -1;
    }
    };	
