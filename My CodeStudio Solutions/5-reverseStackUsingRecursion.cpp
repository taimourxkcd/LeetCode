void insertAtBottom(stack<int>& stack, int element){
    if(stack.empty()){
        stack.push(element);
        return;
    }

    int num = stack.top();
    stack.pop();
    insertAtBottom(stack,  element);

    stack.push(num);

}

void helper(stack<int>& stack){

    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();
    helper(stack);
    
    insertAtBottom(stack, num);



}

void reverseStack(stack<int> &stack) {
    helper(stack);
}