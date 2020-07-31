/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */

var intersect = function(nums1, nums2) {
    var result = [], intersectionArray = {};
    
    for(let n in nums1) {
        if(intersectionArray[nums1[n]]) {            
            intersectionArray[nums1[n]]++;
        } else {
            intersectionArray[nums1[n]] = 1;
        }
    }
    
    console.log(intersectionArray);
    for(let n2 in nums2) {
        if(intersectionArray[nums2[n2]]) {            
          intersectionArray[nums2[n2]]--;
            result.push(nums2[n2]);
        }
    }
    return result;
    
};