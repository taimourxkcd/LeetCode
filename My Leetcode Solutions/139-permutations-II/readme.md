# Problem Statement
- we are given an array nums and we have to find the no of distinct permutations 

# Approch
- we use backtracking here plus recursion and a data structure map.
- map will keep track of the no of occurances of the element in the nums.
- everytime we go down the recursion tree. we decrement the occurance in the map.
- and everytime we backtrack we increment it again.
- this way will not go down the recursion tree to get duplicates

# Complexity:
- Time: O(n * n!)
- Space: (n * n!)