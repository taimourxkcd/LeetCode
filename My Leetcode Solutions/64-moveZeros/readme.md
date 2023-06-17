# Problem
- move all the zeros to the end of the array. in place (without creating a new array)

# Approch
- we have used partition algo here. we check two condition. initially we have a left pointer.
- we loop through the vector. everytime, we get pointer i and l. such that the values they point two are non zero
  and zero. we do swap. 
- also we move the left pointer ahead too.
- remember that, we do not move the left pointer if both are zeros. (above condition is false)



# Complexity

- Time: O(n)

- Space: O(1) 