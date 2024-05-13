# Problem Statement
- we are givent the targetSum and we have to find the no of paths that give us that sum

# Approch
- we use an array called path that keeps track of the each node value.
- when we reach the leaf node we check, if the path sum to equal to the target sum. if yes
  we increase the count.
- at the end we will pop back the element that we added in the array. this way we are able to 
  get all the possible paths. 

# Complexity:
- Time: O(h) == O(n)
- Space: O(h) == O(n)
  in case case when we have a skewed tree