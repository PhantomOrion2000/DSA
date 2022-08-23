class Solution{
public:
    void insertAtBottom(stack<int>& myStack, int x) {
        if(myStack.empty()){
            myStack.push(x);
            return;
        }
        
        int temp = myStack.top();
        myStack.pop();
        
        insertAtBottom(myStack, x);
        
        myStack.push(temp);
    }
    
    void reverseStack(stack<int> &s){
        if(s.empty()){
            return;
        }
        int temp = s.top();
        s.pop();
        reverseStack(s);
        
        insertAtBottom(s,temp);
    }
    
    vector<int> Reverse(stack<int> St){
        // reverseStack(St);
        vector<int> ans;
        while(!St.empty()){
            ans.push_back(St.top());
            St.pop();
        }
        return ans;
    }
};
