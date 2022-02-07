/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:  
    
    int rob(TreeNode* root) { 
        unordered_map<TreeNode*, int> robbedMap;
        unordered_map<TreeNode*, int> NotrobbedMap;
        return rob1(root, false, robbedMap, NotrobbedMap);       
    }
    
    int rob1(TreeNode* root, bool parentRobbed, unordered_map<TreeNode*, int>& robbedMap, unordered_map<TreeNode*, int>& NotrobbedMap) {
           
        if(root==NULL) {
            return 0;
        } 
        
        int not_rob, robbed;
        TreeNode* cur = root;  
        
        if(parentRobbed) {
            if(robbedMap.find(cur)!=robbedMap.end()) {
                return robbedMap[cur];
            }
            robbed = rob1(cur->left, false, robbedMap, NotrobbedMap) + rob1(cur->right, false, robbedMap, NotrobbedMap);
            robbedMap[cur] = robbed;
            return robbed;
        }
        
        else{
           if(NotrobbedMap.find(cur)!=NotrobbedMap.end()) {
                return NotrobbedMap[cur];
            }
            int pick =  cur->val + rob1(cur->left, true, robbedMap, NotrobbedMap) + rob1(cur->right, true, robbedMap, NotrobbedMap);
            int nopick =0 + rob1(cur->left, false, robbedMap, NotrobbedMap) + rob1(cur->right, false, robbedMap, NotrobbedMap);
            not_rob = max(pick,nopick);
            NotrobbedMap[cur] = not_rob;
            return not_rob;
        }
    }
};


/*
root;

root->left && root->right == NULL => return root->val;

left = root->left->left

=root->left->right

right = root->right->left
r->r->r

max(left,right);

*/