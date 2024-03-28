# Problem Statement
- we are given an array nums and we have to find the no of permutations

# Approch
- we use backtracking here plus recursion
- before going down the recursion tree, we first swap the elements. eg [a,b,c]. on first level we would
  swap (a and b), then we would swap (a and c) then c with itself. 
- once we done that, we pass and index down the recurion tree too. eg. if first 'i' was at 'a'.
  then later 'i' would be at 'b'. and so on.
- once we have reached the end i.e index is >= nums.size(). we push that into our ans.
- at the end, we backtrack. that is to say that when we move back we swap again. so that we neutralize
  the effect of swapping that we did earlier. this is b/c we are doing changes to the original nums.

# Complexity:
- Time: O(n!)
- Space: (n * n!)