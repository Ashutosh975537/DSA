class Solution {
  public:
    string solve(Node*root,vector<Node*>&ans,unordered_map<string,int> &mp){
        if(root == NULL){
            return "N";
        }
        string tree = "";
        tree.append(solve(root -> left,ans,mp));
        tree.append(solve(root -> right,ans,mp));
        tree.append(to_string(root->data));
            if(mp.find(tree) != mp.end()){
                if(mp[tree] == 1){
                    ans.push_back(root);
                    mp[tree] = 2 ;
                }
            }
            else{
            mp[tree] = 1 ;
            }
            return tree ;
    }
    
    vector<Node*> printAllDups(Node* root) {
        // Code here
        vector<Node*> ans ;
        unordered_map<string,int> mp ;
        string tree = solve(root,ans,mp); 
        return ans ;
    }
};
