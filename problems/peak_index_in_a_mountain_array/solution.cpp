class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int lo=0, end=a.size()-1;
        while(lo<end) {
            int mid=(lo+end)/2;
            if(a[mid] < a[mid+1])
                lo = mid+1;
            else 
                end=mid;
        }
        return lo;
    }
};
/*
start end
mid-1 <mid < mid+1*/