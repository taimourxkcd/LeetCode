#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> tempStk;
    while(!myStack.empty()){
        tempStk.push(myStack.top());
        myStack.pop();
    }
    myStack.push(x);
    while(!tempStk.empty()){
        myStack.push(tempStk.top());
        tempStk.pop();
    }
    return myStack;
    
}

// recursive solution 
#include <bits/stdc++.h> 

void helper(stack<int>& myStack, int x){
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();
    helper(myStack, x);
    myStack.push(num);

}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    helper(myStack, x);
    return myStack;

    
}
