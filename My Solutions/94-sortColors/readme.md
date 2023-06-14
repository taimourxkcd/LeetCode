# Problem
- we are given an array of colors and we have to sort them inplace such that we do not use lib sort func and colors are represented as 0, 1, 2.

# Approch
- we use the two pointer approch. l and r and a varibale i.
- we run the loop until i is < r
- since we know that colors are represented by 0 1 2. we can use this info
- l will make sure to sort 0 
- r will make sure to sort 2
- and 1 will be automatically sorted
- here left and right pointer are not moving together.
- variable i is the decision maker. it decides where the element needs to go and then increments l or decrements r.
- if 0 is present in right side. it is swapped to the left side. and if 2 is present in the ;eft side, it is swapped to the right side. 

# Complexity

- Time: O(n)

- Space: O(1)