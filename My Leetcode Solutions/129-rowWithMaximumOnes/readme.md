# Problem Statement
- we have a 2d matrix and and we have to return the the row with the max no of ones. in case we have
  multiple rows with same no of max ones. return the one with the smallest row no and max ones count no.

# Approch
- create two variables that keep track of smallest row no and max row count.
- iterate the matrix. in each iteration find the count of 1s.
- if max is < the current no of 1s. then replace the max. and reassign the smallest row to current row.


# Complexity:
- Time: O(n^2) 
- Space: O(1)