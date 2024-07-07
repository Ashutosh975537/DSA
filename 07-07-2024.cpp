// User function template for C++

/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/

class Solution {
  public:
    // Function should return all the ancestor of the target node
   bool flag = false ;
   Node* solve(Node* root,int target, vector<int> &ans){
     if(root == NULL)return NULL ;
     if(root -> data == target || flag) {
         flag = true ;
         return root ;
     }
     Node* left = solve(root -> left,target,ans);
     Node* right = solve(root -> right,target,ans);
     if(left || right){
         ans.push_back(root->data);
     }
     if(left || right){
         if(left) return left ;
         else return right ;
     }else{
         return NULL;
     }
   }
   
   
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        if(target == root -> data)return {};
        bool flag = false ;
        vector<int> ans ;
        Node* xyz = solve(root,target,ans);
       // cout << xyz -> data << endl ;
        return ans;
    }
};
