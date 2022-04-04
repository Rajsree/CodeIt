/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    if(nums.length == 2) return [0,1];
    var map = {};
    for(var i=0;i<nums.length; i++) {
        if(target-nums[i] in map) {
            return [i,map[target-nums[i]]];
        }
        map[nums[i]] = i;
    }
    // return [0,0];
};