# Problem
- we are given an array. return nums[0] if size if == 1 otherwise keep diving the array into half until you have one element remaining. return that 
  element plus also keep doing the opertaions gievn in the question.

# Approch
- we go through two loops
- one divides the nums into half everytime and creates a new vector of the half size.
- at the end we copy the ans into nums and resize the nums
- and reutrn nums[0]

# Complexity

- Time: O(n)

- Space: O(1)