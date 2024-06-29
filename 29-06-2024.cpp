

/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to check whether two linked lists are identical or not.
bool areIdentical(struct Node *head1, struct Node *head2) {
    // Code here
    Node* tempOne = head1 ;
    Node* tempTwo = head2 ;
    while(tempOne && tempTwo){
        if(tempOne -> data != tempTwo -> data){
            return false ;
        }
        tempOne = tempOne -> next ;
        tempTwo = tempTwo -> next ;
    }
    if(tempOne || tempTwo)
         return false;
    return true ;
    
}
