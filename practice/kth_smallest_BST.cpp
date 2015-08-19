/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #include<vector>
 #include<algorithm>
class Solution {
public:
    int BSTsize(TreeNode* root1){
          static int count;
          if(root1)
          {
              return (1+BSTsize(root1->left)+BSTsize(root1->right));
          }
          else
              return 0;
    }
    int kthSmallest(TreeNode* root, int k) {
        if(BSTsize(root->left) == k-1)
                return root->val;
        if(BSTsize(root->left) >= k)
            return kthSmallest(root->left,k);
        else{
            return kthSmallest(root->right,k-(BSTsize(root->left)+1));
        }
    }
};
