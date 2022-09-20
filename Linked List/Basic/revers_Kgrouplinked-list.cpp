// code studio : 

// Question: Reverse List In K Groups


Node* kReverse(Node* head, int k) {
    // base case
    if(head == NULL) {
        return NULL;
    }
    

    // As Usual Solve a first part 
   Node* next = NULL;
    Node* prev = NULL;
    Node* curr = head;
    int cnt= 0;
    
    while( curr != NULL && cnt < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }
    // after Recusion Will handle all the cases or remaining part 
    
    if(next != NULL) {
        head -> next = kReverse(next,k);
    }
    
    
    return prev;
}