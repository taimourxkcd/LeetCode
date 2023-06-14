# Problem
- add spaces to the string. spaces array is given.

# Approch
- sort the space vec
- take a new empty string. and start concatinating 
- when count becomes equal to spaces[k]. add space. 
- the only issue i had was the runtime error here ``` if (k < spaces.size()  && count == spaces[k]) { ``` here if i do this 
  ```  if (count == spaces[k] && k < spaces.size())  `` i get run time error. turns out order matters   
 

# Complexity

- Time: O(nlogn)

- Space: O(m) // size of string