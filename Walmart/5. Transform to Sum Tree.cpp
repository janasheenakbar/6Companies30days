class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int solve(Node* root){
        
        if(!root) return 0;
        
        int a=solve(root->left);
        int b=solve(root->right);
        
        int tmp=root->data+a+b;
        root->data=a+b;
        
        return tmp;
        
        
    }
    
    void toSumTree(Node *root)
    {
        
        solve(root);
    }
};
