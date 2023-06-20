# Problem
- we have an m*n matrix, we have to find the island with the max area.
- an island is formed by the 1s that are attached together.

# Approch
-  we follow 3 step approch
    - first iterate and only check if it is a 1. otherwise, there would be no island, so useless to check
    - then look at the 1s neighbours incrementing 1 with every neighbour
    - once the island is visited make sure to mark it as visited. otherwise infinite loop
- in main function we are going through every possible entery in the matrix and each time we encounter 1, we are passing the grid, count, i and j
- then in countNeighbour func, we first make sure that element is not out of bound
- then base base that if neighbour is 0 then return 0
- mark visited. 
- see its 4 neighbours top, bottom, left, right and increment accourdingly
- the return 1 at the end indicates that the current element is part of the island.

# Complexity

- Time: O(mn)

- Space: O(mn)