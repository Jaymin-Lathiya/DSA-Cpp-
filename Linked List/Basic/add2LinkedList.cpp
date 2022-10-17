// Add two Linked List Data 

// steps:

// step1: reverse input LL
// step2: add2 LL
// step3: reverse resultant LL


class Solution
{
    private:
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
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int val) {
        
        Node* temp = new Node(val);
        //Empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        // Non -empty LL
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
    
    struct Node* add(struct Node* first, struct Node* second) {
        int carry = 0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while(first != NULL || second != NULL || carry != 0) {
            
            int val1 = 0;
            if(first != NULL)
                val1 = first -> data;
                
            int val2 = 0;
            if(second !=NULL)
                val2 = second -> data;
            
            
            int sum = carry + val1 + val2;
            
            int digit = sum%10;
            
            // create a node for answer ll
            insertAtTail(ansHead, ansTail, digit);
            
            carry = sum/10;
            if(first != NULL)
                first = first -> next;
            
            if(second != NULL)
                second = second -> next;
        }
        return ansHead;
    }
    public:
    // add two linked List
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        //step 1 -  reverse input LL
        first = reverse(first);
        second = reverse(second);
        
        //step2 - add 2 LL
        Node* ans = add(first, second);
        
        //step 3 reverse resultant linked List
        ans = reverse(ans);
        
        return ans;
    }
};