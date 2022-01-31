class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;
        for(vector person : accounts) {
            int sum = 0;
            for(auto account : person) {
                sum += account;
            }
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};

//Brute Force O(n*n);