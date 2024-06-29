/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }

};
*/

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(x == 1){
            Node* temp = head ;
            head = head -> next;
            temp -> next = NULL ;
            delete temp ;
            return head ;
        }
         Node* pre = NULL ;
         Node* curr = head;
         Node* Next = NULL ;
         int cnt = 1 ;
         while(cnt < x){
             Next = curr -> next ;
             pre = curr ;
             curr = curr -> next;
             cnt++;
         }
         if(Next){
             pre -> next = curr -> next ;
             curr -> next = NULL ;
             Next -> prev = pre ;
             delete curr ;
             return head ;
         }else{
             
             pre -> next = NULL ;
             delete curr ;
             return head ;
         }
        
    }
};
