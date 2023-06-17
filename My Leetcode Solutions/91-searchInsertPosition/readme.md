# Problem
- we are given a vector and a target that we have to find. if found return the index where it is found and if not fount return the correct index.

# Approch
- approch is a simple binary search except one thing that if we don't find it, then return its correct index.
- variable i is used to keep track of the correct position where the element should be inserted.
- if the element is < target, then it means that element is bigger and it would lie in the right half of the array. so we update the left pointer.
- if the element is > target , then it means that element is smaller and it would lie in the left half of the array and we update the right pointer.
- at the end, we will return the l pointer, it is the correct location where the element should be placed.  

# Complexity

- Time: O(logn)

- Space: O(1)