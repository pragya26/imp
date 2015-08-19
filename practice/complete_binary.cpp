/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (!root)
            return 0;
        int left = 0, right= 0;
        for(TreeNode* p=root; p; p=p->left) ++left;
        for(TreeNode* p=root; p; p=p->right) ++right;
        if (left==right) {
            return pow(2,left) - 1 ;//no of nodes in a perfect complete binary tree is 2^h -1
        }
        else {
            return countNodes(root->left) + countNodes(root->right) + 1 ;//+1 is for counting root node
        }
    }

};
