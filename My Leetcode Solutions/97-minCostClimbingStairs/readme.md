# Problem
- we are given an array costs that contains the cost of climbing a stair. we can climb the stairs in two ways
    - stepping two steps at a time
    - stepping one step at a time
and we can either start from 0 stair or 1 stair.
we have to find minimum cost that is needed to reach the top. 

# Approch1
- This is a dp problem.
- we are  using a top to bottom approch where we move from the given step two starting whiile finding its cost.
- we have 2 base cases
    - either we start from 0, or 1 and in both cases we return the cost corresponding to it.
- in recursion. we are calling sovle 2 times, one time steppking down 2 steps and one time stepping down 1 step. and we are adding the cost associcated
  with it as well.
- moreover we have used memoization using the dp array otherwise we get a TLE.

# Approch2 
- we use dp array to solve it using tabulation.
- we handle the two base cases in the start dp[0] and dp[1]
- then for the rest of the cases, we use a for loop. 
- every time we are storing the result in the dp array. at the end we return what is minimum of when we start from stair 0 or stair 1.

# Approch3
- here we optimize space to O(1).
- we get rid of dp array
- instead we use two variables to keep track of previous two values.
- in everey iteration we add curr value with the one that is minimum and update the prev1 and prev2 variabels


# Complexity (both cases)

- Time: O(n)

- Space: O(n)
