# Problem
- find if the given number is a power of 2 or not like this n == 2x

# Approch
- we know 1 is power of 2^0, so we handle it separately
- and for all the other numbers
    - we declare a new variable and multiply it with 2 in every iteration. 
    - if it is a power of 2, then at some point it would be equal to n (num == n)
    - if not it would become greater and we get out of loop and return false.

# Complexity

- Time: O(log₂(n)) 

- Space: O(1)   