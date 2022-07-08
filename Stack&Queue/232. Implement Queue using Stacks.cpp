class MyQueue {
public:
    stack<int> in;
    stack<int> op;
    MyQueue() {
        
    }
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        if(!op.empty()){
            int ans = op.top();
            op.pop();
            return ans;
        }else{
            while(!in.empty()){
                op.push(in.top());
                in.pop();
            }
            int ans = op.top();
            op.pop();
            return ans;
        }
        
    }
    
    int peek() {
        if(!op.empty()){
            return op.top();
        }else{
            while(!in.empty()){
                op.push(in.top());
                in.pop();
            }
            return op.top();
        }
    }
    
    bool empty() {
        return(op.empty() && in.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
