# Problem
- given array is the money in houses. robber can not rob adjacent houses. so if robber robs like that, what is
 the max money can he get.

# Approch
- since we need to find the max, we can say that this is a dynamic programming problem
- we are keeping three things i.e prev2, prev1 and dp. 
- prev1 is sum of money robbed upto house[n-1]
- prev2 is sum of money robbed upto house[n-2]
- dp is memoized, it stores the max of the previous 2 i.e prev1 or prev2
- we return prev1 b/c that is the max till the last element in the array.            
- the line is little confusing, const int dp = max(prev1, prev2 + num), here we are saying that we can not rob the 
   house[n-1] or house[n-2]. adding prev2 + num give us the maximum amount of money that can be robbed
- prev1 is basically, skipping the current house and then robbing up to the previous house



# Complexity

- Time: O(n) 

- Space: O(1) 