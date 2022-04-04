/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    if(s.length==0) return 0;
    let max = 1;
    
    for(let i=0; i<s.length-1; i++){
        let substring = ""+s[i];
        for(let j=i+1; j<s.length; j++) {
            if(substring.includes(s[j])) {
                break;
            } else {
                substring+=s[j];
            }
            max = substring.length>max ? substring.length : max;
        }
    }
    
    return max;
};