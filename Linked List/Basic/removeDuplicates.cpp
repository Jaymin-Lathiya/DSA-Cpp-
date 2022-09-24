
Node *uniqueSortedList(Node *head)
{

    //  case 1: if list is empty
    if (head == NULL)
        return NULL;

    // case 2 : if the given list is non - empty

    Node *curr = head;

    while (curr != NULL)
    {

        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete (nodeToDelete);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }

    return head;
}