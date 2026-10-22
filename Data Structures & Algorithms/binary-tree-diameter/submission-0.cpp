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
private:
    int maxDepth(TreeNode* node,int &diameter){
        if(!node){
            return 0;
        }
        int l=maxDepth(node->left,diameter);
        int r=maxDepth(node->right,diameter);
        diameter=max(diameter,l+r);
        return 1+max(l,r);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        maxDepth(root,diameter);
        return diameter;
    }
};