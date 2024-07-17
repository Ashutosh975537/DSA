/* node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to construct binary tree from parent array.
  Node* dfs(unordered_map<int,list<int>> &mp,int node){
      Node* root = new Node(node);
      bool flag = false ;
      for(auto it : mp[node]){
          if(flag){
              root -> right = dfs(mp,it);
          }else{
              root -> left = dfs(mp,it);
              flag = true ;
          }
      }
      return root ;
  }
  
  
    Node *createTree(vector<int> parent) {
        // Your code here
        int pat = -1 ;
        unordered_map<int,list<int>> mp ;
        for(int i = 0 ; i < parent.size();i++){
            if(parent[i] == -1){
                pat = i ;
            }else{
                mp[parent[i]].push_back(i);
            }
        }
        return dfs(mp,pat);
    }
};
