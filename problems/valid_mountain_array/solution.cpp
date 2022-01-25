class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int end = arr.size()-1;
        if(end<2) return false;
        
        int start = 0;       
        
        while((arr[start] < arr[start+1])) {
            if(start==end-1) return false;
            start++; 
        }    
                         
        while((arr[end] < arr[end-1])){
            if(end==1) return false;
            end--;
        } 
        return start==end;
 
    }
};