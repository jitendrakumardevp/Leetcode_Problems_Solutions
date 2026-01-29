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
    int tiltsum = 0;

    int findTilt(TreeNode* root) {
       if(root == NULL)
        return 0; 
        post(root);

        return tiltsum ;
    }

     int post(TreeNode* root)
        {
            if(root == NULL)
            return 0;

          int l =   post(root->left);
          int r =   post(root->right);

            tiltsum += abs(l - r);

            return l + r + root->val ; 
            
        }
};
