class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int res = 0;
        for(int i=0; i<manager.size()-1;i++){
            res = max(res, dfs(i, manager, informTime));
        }
        return res;
    }
    
    int dfs(int i, vector<int>& manager, vector<int>& infotime){
        if(manager[i]!=-1){
            infotime[i] += dfs(manager[i], manager, infotime);
            manager[i] = -1;
        }
        return infotime[i];
    }
};

//DFS 
// time needed for all employess = max time to reach all employess of a manager + infotime of the manager.