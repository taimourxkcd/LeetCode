# Problem
- return a 2d vec that is a pascal triangle

# Approch
- for a pascal triangle, we know a couple of things
- first and last element of each row is 1
- run the outer loop for number of times it has rows.
- every time, we resize it and tell how many columns it has.
- make the first and last element of each row = 1
- start the inner loop from 1
- we have a formula... go to previous row, take the element that is before j i.e [j-1] and [j]


# Complexity
- Time O(n^2)

- Space O(n^2)