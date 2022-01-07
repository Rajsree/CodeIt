/**
 * @param {number} n - a positive integer
 * @return {number} - a positive integer
 */
var reverseBits = function(n) {
    let inptstr = n.toString(2);
    let out = 0;
    for(let i=0;i<inptstr.length;i++){
        if(inptstr[inptstr.length-1-i])
           out = out + (inptstr[inptstr.length-1-i]*Math.pow(2,(31-i)));          
    }
    return out;
    
};