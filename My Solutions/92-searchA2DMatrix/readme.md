# Problem
- we are given a 2d vector. and we have to find a given element in it.

# Approch
- we are going to do binary searcch two times in this question. since this is sorted
- first binary search is going to tell us the row that the element is present in
- then second binary search is going to tell us whether the element is inside the that row or now.
- for finding the row, we are taking two variables that are top and bot.
- after we are done with the row. now top and bot contain the starting and ending points for the row.
- we use those top and bot to find the mid now. and then do the simple binary search.
- only thing to note here is  ```int r = matrix[mid_row].size() - 1;``` .mid_row is the row and we are storing its end in r.

# Complexity

- Time: O(logn)

- Space: O(1)