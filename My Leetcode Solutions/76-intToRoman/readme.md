# Problem
- convert given integer to roman

# Approch
- first we nee to make a hash map of int to Roman. we make the map upto the largest value that is given to us in Roman i.e M.
- we apply the rule of Roman Numbers that say
    - for numbers like 5 9 40 90 400 900. we get the previous number by subtracting the smaller number from the bigger number. 
    - eg 4 (5 - 1) = V i.e 5 - I i.e 1 so IV
    - 9 (10 - 1) = X i.e 10 - I i.e 1 so IX
- we have 13 checks (b/c 13 values in the hash map)
- every iteration we check from biggest to smallest (1000 to 1)
- if >= 1000, we divide it by 1000. this will tell use how many times it needs to append M in the resultant string. in other words it tells us like how 
 many 1000s there are. eg in 2500/1000 = 2. then it concatenates MM and store the remaining number in num i.e 500
- Also notice that cnt is not present in every check, it is present in 1 10 100 and 1000. becuase they can be repeated. eg 540. is converted to DXXXX.
  notice that the x is repeated 4 times at the end.


# Complexity

- Time: O(1) 

- Space: O(1) 