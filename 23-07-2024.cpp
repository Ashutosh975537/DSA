/*
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
class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void inorder(Node* root,vector<int> &st){
        if(root == NULL)return ;
        
        inorder(root -> left,st);
        st.push_back(root -> data);
        inorder(root -> right,st);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int> firstBst;
        vector<int> secondBst ;
        vector<int> ans ;
        inorder(root1, firstBst);
        inorder(root2,secondBst);
        int i = 0 ;
        int j = 0 ;
        int n = firstBst.size();
        int m = secondBst.size();
        while(i < n && j < m){
            if(firstBst[i] <= secondBst[j]){
                ans.push_back(firstBst[i++]);
            }
            else{
                ans.push_back(secondBst[j++]);
            }
        }
        while(i < n){
            ans.push_back(firstBst[i++]);
        }
        while(j < m){
            ans.push_back(secondBst[j++]);
        }
        return ans ;
    }
};
