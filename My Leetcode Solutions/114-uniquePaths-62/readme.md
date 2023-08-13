# Problem
- we have to go from the top left of the grid to the bottom right of the grid and count all 
  the possible paths that we can take.

# Approch
- we have 2 base cases
- one case handles what happens if we go out of bound. in that case, we return 0
- we have another case that checks if we have reached the bottom right. at the end. if yes then
  we return 1. that makes one path.
- then we have recursive calls. 
- since we can move either right or bottom. in one call, we call move right and in other we move
  bottom
- without dp we got TLL error.
- so we memoized.

# Complexity

- Time: O(m*n)

- Space: O(m*n)