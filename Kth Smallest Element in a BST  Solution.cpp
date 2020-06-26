class Solution {
public:
    vector<int> v;
    void solve(TreeNode* r)
    {
       if(r)
       {
           solve(r->left);
           v.push_back(r->val);
           solve(r->right);
           
               
       }
       
       
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        solve(root);
        return v[k-1];
        
    }
};
