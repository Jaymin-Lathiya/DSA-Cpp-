#include<iostream>

using namespace std;

class Node{
    public:
    int data;

    Node* next;
    // constructor
    Node(int data)
    {
        this -> data=data;
        this -> next =NULL;
    }


};

void InstertAtHead(Node* &head,int data)
{

    // create a new Node
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;

}

void InsertAtTail(Node* &tail, int data)
{

    Node* tmp=new Node(data);
    tail -> next =tmp;
    tail=tmp;



}


void InsertAtPositon(Node* head,Node* tail, int position , int data)
{
    Node* tmp=head;
    int cnt=1;
    if(position==1)
    {
        InstertAtHead(head,data);
        return;
    }
    while (cnt< position-1)

    {
        tmp = tmp->next;
        cnt ++;
    }

    if(tmp->next == NULL)
    {
        InsertAtTail(tail,data);
        return;
    }
    Node* insertNode=new Node(data);

    insertNode->next=tmp->next;

    tmp->next=insertNode;
    

    
}


void deleteNOde(Node* &head,int position)
{
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else{
        Node* current=head;
        Node* prev=NULL;

        int cnt=1;

        while(cnt<position)
        {
            prev=current;
            current=current->next;
            cnt++;
        }
        prev ->next=current->next;
        current->next=NULL;
        delete current;
    }
}

void printLL(Node* &head)
{
    Node* temp=head;

    while (temp !=NULL)
    {
       cout << temp -> data << " ";
       temp=temp->next;


    }
    cout << endl;
    


}

int main()
{
   Node* node1=new Node(5);
//    cout << node1 ->data << endl;
//    cout << node1 -> next <<endl;

//    head pointed to New NOde
   Node* head=node1;
//    printLL(head);

   InstertAtHead(head,10);
   printLL(head);
   InstertAtHead(head,15);
   printLL(head);


//    intially tail and head both are pointing to first position
   Node* tail=node1;
   InsertAtTail(tail,10);
   printLL(tail);
   InsertAtTail(tail,5);
   printLL(tail);

   InsertAtPositon(head,tail,1,20);

   printLL(head);

   cout<<"head"<<head->data <<endl;
   cout<<"tail"<<tail->data <<endl;


  deleteNOde(head,2);
  printLL(head);



     
    return 0;
}