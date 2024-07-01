void convert(Node *head, TreeNode *&root) {
    // Your code here
    root = new TreeNode(head -> data);
    queue<TreeNode*> q ;
    q.push(root);
    Node* temp = head -> next ;
    while(temp){
        TreeNode* node = q.front();
        q.pop();
        if(temp){
            node -> left = new TreeNode(temp->data);
            temp = temp -> next ;
            q.push(node -> left);
        }
        if(temp){
            node -> right = new TreeNode(temp->data);
            temp = temp -> next ;
            q.push(node->right);
        }
        
    }
}
