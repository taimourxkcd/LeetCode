# Problem Statement
- we need to find the shortest distance to a target in a circular array.

# Approch
- first we handle the edge case that if the startINdex == target.
- then check if target is present then only go ahead. 
- after that we crete two pointer variablese called left and right. they will move simaltaneously, one left other right.
- with the help of modulus forumla that we have used, it helps us to not get out of bound in array. when it crosses the
  threshold then it again starts from the start and vice versa.
- when we found the target we return the distance (ans keeps track of our shortest distance)


# Complexity:
- Time: O(n) 
- Space: O(1)