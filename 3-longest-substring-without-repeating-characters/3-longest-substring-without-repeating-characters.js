/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    if(s.length==0) return 0;
    let substring = "";
    let max = 1;
    
    for(let i=0; i<s.length-1; i++){
        substring = ""+s[i];
        
        for(let j=i+1; j<s.length; j++) {              
             if(substring.indexOf(s[j])==-1) {
                 substring+=s[j]; 
                 
             } else {
                  
                 break; 
             }                         
        } 
         max = substring.length>max ? substring.length : max; 
    }
    return max;
    
};