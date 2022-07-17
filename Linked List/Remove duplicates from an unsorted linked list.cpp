class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     if(head == NULL) return NULL;
     unordered_set<int> seen;
     
     Node* curr = head;
     Node* prev = NULL;
     while(curr) {
         if(seen.find(curr->data) != seen.end()){
             prev->next = curr->next;
             delete curr;
         }else{
             prev= curr;
             seen.insert(curr->data);
         }
         curr = prev->next;
     }
     
     return head;
    }
};
