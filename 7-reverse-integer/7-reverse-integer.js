/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
  const val = x.toString().split('').reverse().join('');
    if(parseInt(val) > Math.pow(2,31)-1) return 0;
     if(parseInt(val)*Math.sign(x) < -Math.pow(2,31)) return 0;
    return parseInt(val) * Math.sign(x);

};


