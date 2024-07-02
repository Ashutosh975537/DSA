/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        string combineData = "";
        Node* temp = head ;
        while(temp){
            combineData += temp -> data ;
            temp = temp->next ;
        }
        int i = 0 , j = combineData.length() - 1 ;
        while(i < j){
            if(combineData[i] != combineData[j])
               return false ;
             i++ ;
             j-- ;
        }
        return true ;
    }
};
