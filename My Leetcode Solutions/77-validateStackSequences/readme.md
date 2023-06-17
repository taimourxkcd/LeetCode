# Problem
- we are given two vectors named pushed and popped. we have to validate both of them. sequence matters (validate meaning ig)

# Approch
- we create an emptyStack and initially push an element into it.
- then we go into the while condition, which runs as long as stack is not empty and top element is equal to the element of popped array.
- in the first test case pushed = [1,2,3,4,5], popped = [4,5,3,2,1]
    - pushed element is not equal to the popped element at the ith index.
    - then condition becomes false and it pushes 2, 3, and 4.
    - then it sees 4, oh 4 and its equal to the popped element at i. it pops it then it pushes 5 and then pops it too
    - at the end it pops rest of the elements too.
- at the end if all the elements have been popped from the pushedStk, then we know that it validates the stack and returns true

# Complexity

- Time: O(n) 

- Space: O(n) 