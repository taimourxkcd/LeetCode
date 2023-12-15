# Problem Statement
- we have a vector of vector that gives us source location and its destination location. we have to find a 
  destination location that does not lead to another location. 

# Approch
- we store the count of source locations in a hash map. 
- then we loop through the paths array and see what is the destination location for which we a count of 
  source location that is less then 1. that means that it does not lead to any other location.  

# Complexity:
- Time: O(n)
- Space: O(n)