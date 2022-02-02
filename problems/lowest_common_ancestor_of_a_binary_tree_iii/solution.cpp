/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
    Node* p1 = p;
        Node* p2 = q;
        while(p1!=p2) {
            p1 = p1==NULL ? q : p1->parent;
            p2 = p2==NULL ? p : p2->parent;
        }
        return p1;
        
    } 
};