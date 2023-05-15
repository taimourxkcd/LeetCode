# Problem
- given a string, that contains L and A.
- if you get 3 Ls consectively return false or more then 1 absent return false

# Approch
- we have used the sliding window approch here
- we have a sliding window of 3
- we go through the whole string looking for As and Ls all the while increasing the counter
- whenever our window get bigger then 3, we check if the element that our window moves away from is a L.
- if it is an L, we decrease L becuase we need to find 3 consective Ls (this isn't very clear to me too)

# Complexity

- Time: O(n)

- Space: O(1)