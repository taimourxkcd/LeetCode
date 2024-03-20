# Problem Statement
- we have a sudoku and we have to solve it.

# Approch
- our approch would be to place value from 1 to 9 if possible otherwise backtrack
- we start by iterating over all of the enteries in the sudoku.
- then we check if we can place a val. 
- for example we can place a value at board[1][1]. 
- then we check if it is safe to place the value
  - no other same value is present in the same row
  - no other same value is present in the same col
  - no other same value is present in the 9*9 matrix
- once we have placed the value, then we make the recursive call. now we will do the whole process for the board with the new value placed. 
- if we get true. value is placed successfully otherwise we backttrack

# Complexity:
- Time: O(9^m) m is the no of empty cells
- Space: (1) b/c we can calculat the max recursive calls. i.e 9 * 9 = 81. see constraints