# Problem
- we are given two nums. condition is given if num1 < num2, then subtract num2 from num1 else subtract num1 from num2. do this until
  num1 or num2 become 0. 

# Approch
- very simple. doing the given operations until num1 > 0 or num2 > 0. 
- only thing that bugged me was this ```  while(num1 > 0 && num2 > 0){ ```when i did num1 != 0 && num2 != 0 did not work.
- if anyone reading knows. open a pull request and add the reason.

# Complexity

- Time: O(log(min(num1, num2)))

- Space: O(1)