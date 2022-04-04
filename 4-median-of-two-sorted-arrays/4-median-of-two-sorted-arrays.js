/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    // let merged = [...nums1,...nums2];
    nums1.push(...nums2);
    nums1.sort((a,b) => {return a-b});
    let mid;
    if(nums1.length%2==0) {
        mid = Math.floor(nums1.length/2);
        return (nums1[mid-1] + nums1[mid]) / 2;
    } else {
        // console.log(nums1)
        return nums1[Math.floor(nums1.length/2)];
    }
};