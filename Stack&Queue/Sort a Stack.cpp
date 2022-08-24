void sortedInsert(stack<int> &stack, int num) {
    if(stack.empty() || stack.top() < num){
        stack.push(num);
        return;
    }
    int temp = stack.top();
    stack.pop();
    
    sortedInsert(stack,num);
    
    stack.push(temp);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
    if(!stack.empty()){
        int temp = stack.top();
        stack.pop();

        sortStack(stack);

        sortedInsert(stack, temp);
    }
}
