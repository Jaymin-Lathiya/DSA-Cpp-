// Steps :

//step 1 -> find Middle
//step2 -> reverse The List Part after Middle
//step3 -> Compare both halves(before mid and After mid)
//step4 -> repeat step 2




class Solution{
  private:
    Node* getMid(Node* head ) {
        Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    Node* reverse(Node* head) {
        
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  public:
    bool isPalindrome(Node *head)
    {
        if(head -> next == NULL) {
            return true;
        }
        
        
        Node* middle = getMid(head);
        //cout << "Middle " << middle->data << endl;
        
        Node* temp = middle -> next;
        middle -> next = reverse(temp);
        
        Node* head1 = head;
        Node* head2 = middle -> next;
        
        while(head2 != NULL) {
            if(head2->data != head1->data) {
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
    
        temp = middle -> next;
        middle -> next = reverse(temp);
        
        return true;
    }
};