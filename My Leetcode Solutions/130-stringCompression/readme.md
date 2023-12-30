# Problem Statement
- we have an array of chars containing consecutive repeating characters. we have to modify the 
  input array chars such that it is compressed. and then return its size.

# Approch
- we iterate the array. then go in the inner loop which runs as long as the character matches.
- as soon as it character changes, we stop and convert the count upto that point into string and append it to res.
- then we modify the chars array with the characters present in the res string. and return res.size


# Complexity:
- Time: O(n^2) 
- Space: O(n)