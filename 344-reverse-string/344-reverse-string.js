/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
    if(s.length<=1) return s;
    
    helper(0, s.length-1);
    
    function helper(start, end) {
        if(start>=end) return;
        [s[start], s[end]] = [s[end],s[start]];
        helper(start+1, end-1);
    }
    
};

