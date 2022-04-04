/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let num = 0, negative = false;
    negative = x<0 ? true : false;
    x = Math.abs(x);
    while(x>0) {
        num = num*10 + x%10;
        x = Math.floor(x/10);
    }
    if(num > Math.pow(2,31)-1) return 0;
    return negative ? -1*num : num;

};


