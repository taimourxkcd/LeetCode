# Problem
- we are given an array that contains the weights of the people. 
- a boat can only have 2 people at max. 
- tell how many boats will be required to carry the people in such a way that we get the across with the minimum boats. we are also
  given a limit of the max weight that the boat can survive.

# Approch
- we have used the two pointer approch here
- first we sort. so that when we combine two people we get the lightest and the heavest person. 
- in this way we iterate. everytime we check if weight is <=  limit. if yes then we move both the pointers b/c both people can be in the same boat.
- and we are incrementing the counter every iteration too.
- if two people exceed the weight limit then we only move the right pointer b/c only the heavy person will be able to sit in that boat.
- in this way at the end we will have the max boats that we need

# Complexity

- Time: O(n/2) for while and O(nlogn) for sort. so O(nlogn) 

- Space: O(1)   