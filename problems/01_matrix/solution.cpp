class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
     
        int m=mat.size()-1;
        int n= mat[0].size()-1;
        
           vector<vector<int>> vis(m+1, vector<int>(n+1,-1));
        
        int dist =0;
        queue<pair<int,int>> q;
        for(int i=0; i<=m; i++) {
            for(int j=0; j<=n; j++) {
                if(mat[i][j] == 0) {
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty()) {
            int k = q.size();
            dist++;
            int dx[4] = {-1,1,0,0};
            int dy[4] = {0,0,1,-1};
            while(k--) {
                pair<int,int> front = q.front();
                q.pop();
                int x = front.first, y=front.second;
                for(int i=0; i<4; i++) {
                    int nx = x+dx[i], ny = y+dy[i];
                    
                    if(nx<0 || nx>=m+1 || ny<0 || ny>=n+1 || vis[nx][ny]!=-1 || mat[nx][ny]==0) {
                        continue;
                    }         
                   
                 
                    mat[nx][ny] = dist;
                    vis[nx][ny] = dist;
                    
                    q.push({nx,ny});                    
                }
                
            }
                        
        }
        return mat;
    }
};