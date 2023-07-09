# Problem
- given a matrix whenever you encounter a 0, turn its whole row and column into 0s

# Approch
- we have a brute force approch:
- in this whenever we found a 0, we convert the whole row and whole column into -1.
- -1 b/c we were getting the problem that what if the last entry of the row was 1 and it converted the whole row into 0. now
   that the last entry is zero, it would convert its whole row and col into 0, which should not have been done.
- Time: O(n)
- Space: O(n)

- now the better solution:
- here we will take the extra space
- we take two vectors row and col that keep track of when we found a zero. initially those vectors are 0 but when we found a zero we
  turn it into 1.
- once that is done we we iterate over the whole matrix and check in every iteration inside the row and col vector, if either is 1, we 
  convert that row and column into 0s.

- there is a best solution for this T: O(n*m) and S: O(1). i did not understand it maybe look into it later


# Complexity

- Time: O(n*m)

- Space: O(n) + O(m)