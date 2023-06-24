# Problem
- we are given a time array. which denotes the time taken by each car to complete the trip. eg [1 2 3] iike 0th car takes 1 hour, 1st car takes 2 hour
  and so on. and we are also given the totalTrips. we have to return the minimum time require for all buses to complete the total trips.

# Approch
- we will be using binary search here
- first we define the lower and upper bounds. here ``` long long r = (long long)time[0] * totalTrips; ``` we have assumed that the bus1 takes 
  the longest time
- i have dry run the solution, i know its updating trips based on the mid every time and compares it with the totalTrips.
- however, i don't understand why does this work. (will come back to it some time later)  


# Complexity

- Time: O(nlogn)

- Space: O(n)