/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
    if(s.length<=1) return s;
    if(s.length==2) {
        let temp = s[0];
        s[0] = s[1];
        s[1] = temp;
        return s;
    }
    for(let ele=0; ele<s.length/2; ele++) {
        let temp = s[ele];
        s[ele] = s[s.length-ele-1];
        s[s.length-1-ele] = temp;
    }
    return s;
};