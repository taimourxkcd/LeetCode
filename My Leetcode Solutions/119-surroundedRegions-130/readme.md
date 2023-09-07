# Problem Statement
- we have a grid and we have to convert all 0s into X if the 0s are surrounded by X completely. Notice that the zeros can be connected.

# Approch
- three things. first take the four boundry regions and convert them to a different character like 'Y'. then run dfs on all of them. at the end convert all the Os to X.
- this works b/c first of all the boundry region values can never be converted to Xs b/c one of there side they have nothing. 
- also we are running dfs everytime. this is to include all the 0s that are connected to the boundry 0s.
- once we are done witht that we are only left with the 0s that are completely surrounded by X and we convert them to x and convert the 'Y' back to 0 

# Complexity
- Time: O(m*n)
- Space O(1)
