/* Strucutre of a link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // code Here
        Node* newNode = new Node(x);
        if(head==NULL) return newNode;
        Node* temp = head;
        int len = 0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int mid = (len-1)/2;
        temp = head;
        for(int i=0;i<mid;i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        
        return head;
    }
};