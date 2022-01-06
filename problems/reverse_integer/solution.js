/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let rev = 0;
    let limit = Math.pow(2,31)
    let integerval = Math.abs(x);
    while(integerval!=0) {        
        rev = rev*10 + integerval%10; 
        if(rev > limit-1 || -rev < -limit) return 0;
        integerval = parseInt(integerval/10);        
    }   
    if(x<0) {
        return -rev;
    } 
    return rev;
};