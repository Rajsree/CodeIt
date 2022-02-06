class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v) {
        int n= v.size()-1;
        int man = v[0];
        int maxdist = -1;
        // int res = 0;
        for(int i=1; i<=n; i++) {
            maxdist = max(maxdist, man+v[i]-i);
            man = max(man, v[i]+i);         
        }
        return maxdist;
    }
};
/* n
i=0ton
    j=i+1 to n
        distance = v[i] + v[j] + i - j;
        max(maxdis,distance);
        
return maxdis */
/* 
man point = start;
view = end;

while(man<view) {
    man++;
    view--;
    dis = v[man] + v[view] + man - view;
    maxdis = max(dis,maxdis);
} */