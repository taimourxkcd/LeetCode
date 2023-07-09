# Problem
- given the matrix we have to rotate it

# Approch
- brute force approch
- we create another matrix and place each entry correctly in its right place
- the formula after observation we get is mat[n-1-i] = mat[i][j]. dry run it to see how it works.
- brute force will take T: O(n^2) S: O(n^2)
- Optimized
- two steps
    - take the transponse. we observed that the diagonal remains the same. and for the upper triangular and lower triangular we 
      need to swap. 
    - we do swapping only for the upper part
    - step 2 is reverse each row of the transpose you just took.

# Complexity

- Time: O(n^2)

- Space: O(1)