/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    if(nums.length == 2) return [0,1];
    let map = {};
    for(let i=0;i<nums.length; i++) {
       let find = map[target-nums[i]];
        if(find!=undefined) {
            return [i,find];
        }
        map[nums[i]] = i;
    }
    return [0,0];
};