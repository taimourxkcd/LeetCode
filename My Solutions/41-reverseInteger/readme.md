# Problem
- question is simple that we to reverse a number and check if it lies b/w INT_MIN and INT_MAX

# Approch
- first approch i tried was making an empty string
- then appending the number in it from back, the problem was that stoi() function was not able to convert 
  very large to integer. so i did not do it
- then we created a long long var to store the result
- we create a flag which is set false if no is positive and if negative then positive. before reversing we turn it +ve.
- plus we also make sure to store x in another variable val of long long type because of small length
- at end we again turn it into negative if it was -ve.

# Complexity
- The time complexity  O(logx).

- The space complexity O(1)