void pAtBo(stack<int>& myStack, int x) {
    if(myStack.empty()){
        myStack.push(x);
        return;
    }
    int temp = myStack.top();
    myStack.pop();
    pAtBo(myStack, x);
    myStack.push(temp);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    pAtBo(myStack, x);
    return myStack;
}
