# Problem Statement
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
# Approch
- this is basically a fabonnachi sequence.
- i had a code already wriiten for fibonnachi that computes the series up to a number
- so if i needed to find for n, i found upto n+1. that is why we add 1 in start

# Complexity
- The time complexity of the climbStairs function is O(N), where N is the input integer n. This is because 
the function uses a loop that iterates N-1 times, and each iteration takes constant time O(1) to compute the next Fibonacci number.

- The space complexity of the climbStairs function is O(1), because the function uses only constant 
extra space to store the variables prev2, prev, and curr, regardless of the input value n.