/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node* temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
         if (k > count) return -1;
        temp = head;
        for(int i=1;i<count-k+1;i++){
            temp = temp->next;
        }
        return temp->data;
    }
};