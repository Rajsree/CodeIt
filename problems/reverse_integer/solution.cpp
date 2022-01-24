#include <math.h>
class Solution {
public:
    int reverse(int x) {
        long int ans = 0;
        
        while(x) {
            ans = ans*10 + x%10;
            x/=10;            
        }
        if(ans > (pow(2,31)-1)) return 0;
        if(ans < -(pow(2,31))) return 0;
        return ans;        
    }
};