# Problem
- we are given a string of parenthesis. and rules are given. if this () then score is 1. if like this ()() then socre 1+1 and if like this 
  (A) then score = *2. 

# Approch
- we are going to use a stack here. 
- we traverse the string.
- if condition handles the "(" bracket
- else condition handles the ")" bracket
- if we found an opening bracket, we push the score that we have at that time. and reset the score b/c we are entering a nested
  parenthesis and want to store the score of the outer pranthesis. 
- if it is a closing bracket, we first check the score, a score of 0 means that previous one was opening one, so we set score = 1 and add it 
  with what is on the top of the stack. 
- and if score is not 1, then it means, its of type (A) and we set the score. 2*score.
- at the end we pop the element, b/c we have found the outer parenthesis and found the socre.

# Complexity

- Time: O(n)

- Space: O(n)