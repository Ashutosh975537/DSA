/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// Return the root of the modified tree after removing all the half nodes.
class Solution {
  public:
    Node* next = NULL;
    bool solve(Node*root){
        if(root == NULL)
            return false ;
        
        bool left = solve(root -> left);
        if(left){
            if(next -> right){
                root -> left = next -> right ;
                next -> right = NULL ;
            }
            else{
                root -> left = next -> left ;
                next -> left = NULL ;
            }
        }
        bool right = solve(root -> right);
        if(right){
            if(next -> right){
                root -> right = next -> right ;
                next -> right = NULL ;
            }
            else{
                root -> right  = next -> left ;
                next -> left = NULL ;
            }
        }
        
        
        next = root ;
        if((root -> left && !(root -> right)) || (root -> right && !(root -> left))){
            return true ;
        }
        else{
            return false ;
        }
    }
  
  
    Node *RemoveHalfNodes(Node *root) {
        // code here
        bool xyz = solve(root);
        if(xyz){
            if(root -> right){
                root = root -> right;
            }
            else{
                root = root -> left ;
            }
        }
        return root ;
        
        
    }
};
