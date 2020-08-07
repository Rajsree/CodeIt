/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let boolSet = [];
    for(i in nums) {
        console.log("i :", i);
        if(boolSet.includes(nums[i])){
           let pos = boolSet.indexOf(nums[i]);
            boolSet.splice(pos,1);
        } else {
            boolSet.push(nums[i])
        }
    }
    return boolSet[0];
};