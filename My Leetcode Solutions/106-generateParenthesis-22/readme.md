# Problem
- we have been given a number and we have to return an array that contains all of the possible valid combinations
  in which the parenthesis can be arranged

# Approch
- create a resultant vector and a buffer which will form the valid string.
- then we call a helper function which is actually a recursive function. 
- base case is that whenever the buffer size becomes 2*n we stop. this is because, 
  it will first place all the left parenthesis. then right. so if n is 3. 3 opening and 3 closing.
- Moreover, in the first recursive call, we move towards the left end of the recursive tree, then place
  closing brackets one by one in the second recursive call. 

# Complexity

- Time: O(2^2n)

- Space: O(2n)