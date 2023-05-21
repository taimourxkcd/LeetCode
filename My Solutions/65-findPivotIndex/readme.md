# Problem
- we are given an array and we have to find whether the leftSum == rightSum.
- all elements to the left (inclusive mid) are leftSum
- other to the right (not inclusive mid) are right

# Approch
- first we find the total sum of all the elements
- then we start moving from start and end of the array
- from the left we keep addiing elements (variable l)
- from right we keep subtracting the current element
- important thing to keep in mind that, everytime we check if l == r, before that we change the r. after everything
  done, we change l.
- dont know how relevant this is but order does matter


# Complexity

- Time: O(n)

- Space: O(1) 