/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    let merged = [...nums1,...nums2];
    merged.sort((a,b) => {return a-b});
    if(merged.length%2==0) {
        let mid = Math.floor(merged.length/2);
        return (merged[mid-1] + merged[mid]) / 2;
    } else {
        console.log(merged)
        return merged[Math.floor(merged.length/2)];
    }
};