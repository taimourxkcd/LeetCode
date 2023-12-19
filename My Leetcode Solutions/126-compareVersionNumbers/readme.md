# Problem Statement
- we have 2 version numbers and we also have some conditions. we have to return 1, -1, or 0 depending on if they
  are equal, greater or smaller. 

# Approch
- first we create a new function called splitVersion which takes in the string and return the vector with 
  version numbers. 
- to handle the case of leading 0 that we have to ignore. i think stoi function handles that. 
- then we have a simple loop that iterates the number of times that is the lenght of max vector
- to handle the case where one vec is smaller in size then other we use ternary opertor.it assigns 0 in that case
- then we check the conditions that are given in question

# Complexity:
- Time: O(max(v1.size(), v2.size()))
- Space: O(max(v1.size(), v2.size()))