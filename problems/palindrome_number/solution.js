/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if(x<0 || x%10 === 0 && x!==0) return false;
  
    let rev = 0;
    while(x > rev) {
        rev = rev*10 + x%10;
        if(rev === x) {
            return true;
        }
        x = Math.floor(x/10);
    }
    
    return rev == x;

    
};