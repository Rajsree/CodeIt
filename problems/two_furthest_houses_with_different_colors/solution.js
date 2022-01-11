/**
 * @param {number[]} colors
 * @return {number}
 */
var maxDistance = function(colors) {
    var len = colors.length;
    
    if(colors[0]!=colors[len-1]) return len-1;    
    
    var diff = 0;

    let i=0; 
    // let j=len-1;
    while(i<len/2) {
        let j = len -1;
        while(j > i) {
            if((j-i)>diff && colors[j]!=colors[i]) {
                diff = j-i;
                break;
            } else {
                j--;
            }
        }
        i++;
    }
 
    return diff;
    
};