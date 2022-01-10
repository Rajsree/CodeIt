/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {  
    
    let onrepeat = false;   
    
    for(let i=1; i<=nums.length; i++){
        if(nums[i-1]==nums[i]){
            if(onrepeat) {
                nums.splice(i,1); 
                i--;
            }
            onrepeat = true;
        } else {
            onrepeat = false;
        }
    } 
    
    return nums.length;
};