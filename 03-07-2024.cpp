class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        Node* curr = head ;
        Node*pre = NULL ;
        Node* Next = head -> next ;
        while(Next){
            if(curr -> data == Next -> data){
                while(Next && curr -> data == Next -> data){
                    Next = Next -> next ;
                }
                if(pre){
                    pre -> next = Next  ;
                    curr = Next ;
                    if(Next)
                    Next = Next -> next ;
                }else{
                    head = Next ;
                    curr = head ;
                    if(Next)
                    Next = curr -> next ;
                }
            }
            else{
                pre = curr ;
                curr = curr -> next ;
                Next = Next -> next ;
            }
        }
        return head ;
            
    }
};
