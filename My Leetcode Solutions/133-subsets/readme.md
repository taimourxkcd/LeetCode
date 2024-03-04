# Problem Statement
- we have an array and we have to find all the possible subset with no duplicates

# Approch
- we will use recursion here. include exclude pattern. 
- we draw a recursive tree. we start moving from index 0 upto the size of the array. 
- when moving down a level, we include the element on the right hand side and also exclude it on left hand side
- at the end, we will have all the possible subsets

# Complexity:
- Time: O(n*m) 
- Space: (1)