/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
     if (t.length !== s.length) return false;
    const map = {};
    for(let x of s) {
        map[x] = (map[x] || 0)+ 1;
    }
    for(let i of t) {
        if(!map[i]) return false;
        else map[i]--;
    }
    return true;
};