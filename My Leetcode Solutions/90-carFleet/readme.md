# Problem
- we are given to arrays. one is the current position of the car. and the other is its given speed. plus we are also given the target that they have to
  reach. car fleet is the cars that are travelling at the same speed. we have to find the no of car fleets.

# Approch
- first we need to find the time for each car that it needs to reach the destination.
- we find the time for each car and store it inside in a vector of pair where we have a the car position with the time we find for it.
- by sorting we make sure that the cars closer to the destination will apear first in the vector.
- we have kept the max variable. if the current car time we found is greater then the maximum then that means that car cannot catch upto it
  or get ahead of it. it means that it would form a new fleet. there count is incremented and max updated.
- at the end we return the count. that is the total number of car fleets we will have.

# Complexity

- Time: O(nlogn)

- Space: O(n)