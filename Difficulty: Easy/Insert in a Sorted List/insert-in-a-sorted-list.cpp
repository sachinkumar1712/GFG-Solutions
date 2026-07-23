/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        Node* temp = new Node(key);
        if(head==NULL || key<=head->data){
            temp->next = head;
            return temp;
        }
        Node* temp1 = head;
        while(temp1->next!=NULL && temp1->next->data <key){
            temp1 = temp1->next;
        }
        temp->next = temp1->next;
        temp1->next = temp;
        return head;
        
    }
};