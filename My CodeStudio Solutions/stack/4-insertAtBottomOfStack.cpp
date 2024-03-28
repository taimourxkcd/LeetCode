#include <bits/stdc++.h> 

void helper(stack<int>& inputStack, int count, int size) {
   if (count == size / 2) {
      inputStack.pop();
      return;
   }

   int num = inputStack.top();
   inputStack.pop();
   helper(inputStack, count + 1, size);
   inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N){
   int count = 0;
   helper(inputStack, count, N);
   
}
