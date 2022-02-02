class Solution {
public:
    int trap(vector<int>& a) {
        int n = a.size()-1;
        int maxl = 0, maxr = 0, trapheight, sum=0;
        int l=0, r=n;
         // vector<int> quantity;
        while(l<r) {
            if(a[l] <= a[r]){
                if(a[l]<=maxl) {
                    sum+=maxl-a[l];
                    l++;
                }
                else maxl=a[l];
            } else {
                if(a[r]<=maxr){
                    sum+=maxr-a[r];
                    r--;
                } 
                else maxr=a[r];
            }
        }
        return sum;
    }
};