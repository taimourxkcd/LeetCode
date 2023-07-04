# Problem
- we are given a number and we have to find if its happy based on followong conditions
    - if you keep talking the square of its indiviual digits and it eventually ends up at 1 then it is happy
    - if not then it would run in the endless loop

# Approch
- we make a function called find sum. its job is to break the number down into indiviual digits and add them up.
- we run the loop until the number != 1
- we delare a set called visited to keep track of the numbers that have been visited. this will help us to find if there is a cycle and if found we 
  return false
- if we get out of while loop then it means that num is happy and we return true

# Complexity

- Time: O(k) where k is the number of digits in n

- Space: O(k)