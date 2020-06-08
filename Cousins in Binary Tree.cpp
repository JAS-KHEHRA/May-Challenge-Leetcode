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
    bool isCousins(TreeNode* root, int x, int y) 
    {
     int px=0;
        int py=0;
        int dx=-1;
        int dy=-1;
        int d=0;
        
        fun(root,x,y,dx,dy,py,px,d);
        return((dx==dy) && (px!=py));
        
    }
     void fun(TreeNode* root, int x, int y,int& dx, int&dy,int& py, int& px, int d)
     {
         if(!root)
             return;
         if(root->left)
         {
             if(root->left->val==x)
             {
                 px=root->val;
                 dx=d+1;
             }
             if(root->left->val==y)
             {
                 py=root->val;
                 dy=d+1;
             }
             
        }
         if(root->right)
         {
             if(root->right->val==x)
             {
                 px=root->val;
                 dx=d+1;
             }
             if(root->right->val==y)
             {
                 py=root->val;
                 dy=d+1;
             }
             
        }
         if(dx!=-1 && dy!=-1) return;
         fun(root->left,x,y,dx,dy,py,px,d+1);
         
         fun(root->right,x,y,dx,dy,py,px,d+1);
         
         

     }
};
