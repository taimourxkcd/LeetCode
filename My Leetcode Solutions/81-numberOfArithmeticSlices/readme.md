# Problem
- We are given an array and we have to find the number of subarrays such that, the difference b/w the two elements is the same. Also note that the 
  sub arrays are consective.

# Approch
- this is a N^2 approch instead of N^3 approch
- here first we calculate the difference b/w all of the elements in the array and store them in a new array called diff.
- then we take a count variable and loop through the array. 
- for every element in the diff array, we see all them elements ahead of it.
- as long as the diff is equal we keep increasing the count. as soon as we get a diff element then we break. so have got a sub array.
- at end we will have all the differnet consective arrays who are arithmethic slices

# Complexity

- Time: O(n^2) 

- Space: O(n) 