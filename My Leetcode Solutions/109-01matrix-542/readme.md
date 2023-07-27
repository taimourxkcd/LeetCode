# Problem
- In the given problem, we have a matrix and we have to return the matrix of the same 
size but instead of 1s, it should return the minimum distance to 0. do not move diagonally.

# Approch
- a couple of things. we use a 2d vec to make a new matrix of same size and use a queue. 
- first we initialize the whole matrix as -1.
- then we move through the whole input matrix mat and whenever we find 0, we push into the queue and 
  in ans matrix change them from -1 to zero. the reason to push them into the queue is so that when
  we start to explore its neighbours, we are able to update the distance accordingly.
- we have a pair in the queue as the x and y coordinate.
- we get them and store them in i and j
- then we first check if the i and j are valid. not out of bound. 
- if yes then, we check its 4 neighbours. 
- if neighbour is -1, not visited, then we visit it. push it into the queue and add 1. b/c it is at +1 
  distance from 0.
- once all 4 neighbours are visited, we pop it from the queue. 

# Complexity
 
 - Time: O(m*n)
 - Space: O(m*n)
