# Problem
- we have an array and we have to find the element that is duplicate. the imp thing is that we should be able to do it without using extra space.

# Approch
- very straightforward
- sort the vec
- every iteration see the element and the element next to it. if found store in n and return.

# Complexity

- Time: O(nlogn)

- Space: O(1)