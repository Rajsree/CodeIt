/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    let carry =0;
   
    let recursiveAdd = function(l1,l2) {
        if(!l1 && !l2 && carry==0){
             return null;
        }
           
        
        let l1val = l1 ? l1.val : 0;
        let l2val = l2 ? l2.val : 0;
        let l1next = l1 ? l1.next : null;
        let l2next = l2 ? l2.next : null;
        
        let sum = l1val + l2val + carry;
        
        carry = Math.floor(sum/10);
        
        sum =  sum%10
        
        return {
            val : sum,
            next : recursiveAdd(l1next, l2next)
        }
    }
     return recursiveAdd(l1,l2)
};