class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool solve(Node* root, int min ,int max){
        if(root == NULL)return true ;
        bool left = solve(root -> left,min,root->data);
        bool right = solve(root -> right,root->data,max);
        if(left && right){
            if(root -> data > min && root -> data < max){
                return true ;
            }
            else{
                return false ;
            }
        }else{
            return false ;
        }
    }
    
    bool isBST(Node* root) {
        // Your code here
        return solve(root,INT_MIN,INT_MAX);
    }
};
