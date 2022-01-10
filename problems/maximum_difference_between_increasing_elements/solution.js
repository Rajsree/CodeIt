/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumDifference = function(nums) {
    let diff = -1;
    for(let i=0; i<nums.length-1; i++) {
        for(let j=i+1; j<nums.length; j++) {
            if(nums[j] > nums[i]) {
                let thisDiff = nums[j]-nums[i];
               if(thisDiff> diff) diff = thisDiff; 
            }            
        }
    }
    return diff;
    
};