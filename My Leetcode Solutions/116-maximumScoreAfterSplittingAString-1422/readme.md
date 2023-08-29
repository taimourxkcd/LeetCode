# Problem Statement
- we are given a string containing 0s and 1s. after splitting. score on the left side is sum of all 0s and on right it is sum of 1s. we have to find the maximum score. 

# Approch
- first we get the sum of all of the 1s that are present in the string. and store it in cnt1
- then we start traversing the string.
- if we find 0 then cnt0 increases. otherwise subtract from cnt1. 
- then sum both. this gives us that sum at that point in time. 
- then we update max. 
- we run the second loop - 1 times b/c we cant split a single character.

# Complexity
- Time: O(n)
- Space: O(1)
