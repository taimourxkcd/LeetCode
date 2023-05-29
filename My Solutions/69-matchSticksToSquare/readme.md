# Problem
- we have been given an array and we have to find if we can make a square using them. combining them etc.

# Approch
- we have used backtracking here, memoization, recursion and 3 optimizations.
- start with the edge case, if array is empty then false b/c cant make a square.
- make a new vector called ans. its size is 4. it represents sides of a square. all should be equal
- then call the dfs func, here in the base case we check all the sides of square if they are equal return true.
  else false
- then for every element in the matchsticks array, we do 2 things.
    - one we add it in itself, move down the recurion tree like that picking elements one by one and check if we 
      find the solution
    - if we dont find the solution in first subtree, then we backtrack and do the whole recursion process in the 
      second subtree.
- we repeat the whole process for all the elements in the matchsticks array. at the end of all trees if we still 
  didnt get the answer, we return false.
- right now we will be getting TLE error if submitted.
- first optimization is find the totol sum of the matchsticks and divide by 4. this tells you the length of the 
  side. we call it target. if at any point any value in our resulting ans vec gets > target we dont move down 
  any further in the recursion tree. b/c we cant form a square. 
- second optimization, before calling dfs, we sort in the decreasing order, in this way we will know earlier that
  we dont need to calculate any further b/c we can't form a square b/c matchstick[i] > target.
  before the optimization if 13 was at the end of the array and 9 was target then we had to do all the calculations
  for prev elements.
- third optimizaion is memoization, if we have already calculated something in the ans vec then we dont need to
  calculate it twice. here we check all the previous elements in the ans array. if we get an equal, we dont do 
  any further work. we just move to next element. but if we have not calcualted it earlier j would != -1 and allowed
  to move further into the loop


# Complexity

- Time: O(n) 

- Space: O(4^n) 