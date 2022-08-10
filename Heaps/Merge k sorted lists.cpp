class compare{
  public:
    bool operator()(Node<int>* a, Node<int>* b) {
        return a->data > b->data;
    }
};

Node<int>* mergeKLists(vector<Node<int>*> &listArray)
{
    // Write your code here.
    priority_queue<Node<int>*, vector<Node<int>*>, compare> mini;
    
    int k = listArray.size();
    
    if(k == 0){
        return NULL;
    }
    
    for(int i =0 ;i <k ;i++){
        if(listArray[i] != NULL){
            mini.push(listArray[i]);
        }
    }
    
    Node<int>* head = NULL, *tail = NULL; 
    
    while(!mini.empty()){
        Node<int>* temp = mini.top();
        mini.pop();
        
        if(temp->next != NULL){
            mini.push(temp->next);
        }
        
        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }
    return head;
}
