void deleteNode(Node* node_ptr)
{
    // If the node to be deleted is the 
    // last node of linked list
    if (node_ptr->next == NULL)
    {
        free(node_ptr);
        // this will simply make the node_ptr NULL.
        return;
    }
      
    // if node to be deleted is the first or 
    // any node in between the linked list.
    Node* temp = node_ptr->next;
    node_ptr->data = temp->data;
    node_ptr->next = temp->next;
    free(temp);
}
