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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> s,g;
        if(preorder.empty()) return 0;
        int root_value=preorder[0];
        for(int i=1;i<preorder.size();i++)
        {
            if(preorder[i]>root_value)
            {
                g.push_back(preorder[i]);
            }
            else s.push_back(preorder[i]);
        }
        
        TreeNode* root= new TreeNode(root_value);
        
        root->left= bstFromPreorder(s);
        root->right= bstFromPreorder(g);
    
        return root;
        
        
    }
};
