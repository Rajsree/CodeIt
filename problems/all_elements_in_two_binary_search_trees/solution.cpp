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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res1;
        inorder(root1,res1); //[1,2,4]
        inorder(root2,res1); //[0,1,3]
        return res1;
    }
    void inorder(TreeNode* root, vector<int>& res) {
        if(root!=NULL) {
            inorder(root->left,res);
            vector<int>::iterator val = lower_bound(res.begin(),res.end(), root->val);            
            if(val!=res.end()) {
               res.insert(val,root->val); 
            } else {
                res.push_back(root->val); 
            }
           
            inorder(root->right,res);
        }
    }
};

//Inoder Traversal of root1 => Root 1 sorted in ascending O(N)
//Inorfer if root2 => root2 in ascending O(N)
//Merge root1 & root 2 with a for loop & a index pointing variable => O(N) 
//Space => O(4N)


//Approach2
//O(N) + O(N) + O(1)
//O(N)