# Problem
- we have a 2d vector that contains a couple of intervals. we have to see that the ones that are overlapping and merge them. and return
  a new 2d vector with the new merged intervals

# Approch
- the only logic we have here is to compare current intervals start value with the end value of the previous interval.
- we check is current<=previous then that means that this is an overlapping interval otherwise not. 
- the sort here automatically sorts by default on the basis of first value. we sort the intervals vector first
- we push the initial vector into ans b/c we need to have at least one previous value to start.
- once we have that we store that in a new vector (by reference) called v. we pick the ending interval from that called endValue
- then if it is overlapping we change the value in the ans vector. by reference comes handy here.
- if not overlapping just push into the ans vec.
- return ans;

# Complexity

- Time: O(nlogn + n) // sorting then traversing

- Space: O(n)