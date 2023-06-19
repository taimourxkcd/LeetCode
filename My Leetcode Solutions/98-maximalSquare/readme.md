# Problem
- we are given a 2d vector which represents a matrix. we have to find out the larget square that can be formed using only 1s

# Approch
- the way we do it is by creating a new dp matrix with +1 row and +1 col. 
- initiallt the whole matrix is 0
- since we have to find the square that is formed using 1s, we only perform operations when we get a 1.
- once we have a 1, we look at its top[i+1][j], at is back[i][j+1] and on diagonal top in backside[i][j]. 
- and add 1 with whatever is the minimum out of those 3.
- also we update the maxLen vairable at eveytime. this tells us how big our matrix is going to be
- and we return maxLen * maxLen. cuz we sum all of the ones that are inside the square

# Complexity

- Time: O(m * n)

- Space: O(m * n)