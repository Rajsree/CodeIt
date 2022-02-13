class Solution {
public:
    bool isPalindrome(int x) {
        long int y = 0;
        int temp = x;
        if(x<0) return false;
        while(x) {
            y = y*10 + x%10;
             x /= 10;
        }    
       return y==temp;
        
    }
};