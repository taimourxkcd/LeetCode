# Approch
if we have a subarray that is [1 2 3 4 5]
then it can have this many sub arrays:

for index 0: n
for index 1: n-1
for index 2: n-2

## formula n(n + 1 ) / 2

# Kadanes algorithm

we take curSum and maxSum and initially they are equal to nums[0]
we loop through the whole array 
at every step we do ans =  curSum + nums[i]
assign curSum = max (nums[i], ans)
assign maxSum = curSum if curSum is bigger

## complexity
    time: O(n)
    space O(1)
