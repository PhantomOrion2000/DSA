void printNthFromLast(struct Node* head, int n)
{
    int len = 0, i;
    struct Node* temp = head;
 
    // count the number of nodes in Linked List
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
 
    // check if value of n is not
    // more than length of the linked list
    if (len < n)
        return;
 
    temp = head;
 
    // get the (len-n+1)th node from the beginning
    for (i = 1; i < len - n + 1; i++)
        temp = temp->next;
 
    cout << temp->data;
 
    return;
}
