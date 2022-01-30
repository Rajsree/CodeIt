class Solution {
public:
    int fib(int n)  {
        
        // int memo[n+1];
       
        // int val;
        if(n<2) {
           return n;
        } 
            int a = 0, b=1, c=a+b;
        for(int i=2;i<=n;i++){
             c=a+b;
            a=b;
            b=c;
        }
          
    
        
        return c;
        
    }
};