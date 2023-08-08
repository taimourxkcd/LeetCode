# Problem
- we are standing at position 0 in an infinite line. and we are given a target and we have to reach it
  and tell how many steps do we need to take to reach there.

# Approch
- we take the abs of target b/c the solution works symmetrically, meaning reaching n or -n would take
  the same number of steps
- sum will help us track if we increased the sum > target or not.
- then we go into the first loop. here we keep increase  the sum until it becomes equal to or greater 
  then the target.
- we move something like this:
    - 1 step right (position 1)
    - 2 steps right (position 3)
    - 3 steps right (position 6)
- the next while loop deals witht the adjustments,(sum - target ) % 2 tells us if the difference
  is even or odd.      
- if it is odd we cant revert a step back. therefore we add more steps until it comes even, then we
  can revert back.
- at the end if it was even, we directly return steps -1 otherwise we go in while loop until it
  becomes even and then return.  

# Complexity

- Time: O(sqrt(target)) b/c n(n + 1)/2 ≈ target
- Time: O(1) 