# Problem
- so we are given an array that contains that pile of bananas and koko is a monkey that has to eat all the pile of bananas. but he has to eat them 
  in the k given hours. so we have to tell that how many bananas should koko eat per hour such that he is able to complete eating all bananas in
  h hours.

# Approch
- we will use a range here. the range will lie from l = 1 to r = maxium value in the piles array.
- to find what is the max value in the piles array we have to sort it. since we do not want to change the order of the original array, we we create a 
  vector of same size and copy all elements from piles and sort it and find the max value. 
- now that we have max and lowest value, we can use binary search.
- then to find out for the mid value how many hours will be required. 
- we move throught the whole pile and find hours required to each pile for that particular no of hours. and store them in total time.
- if total Time is < h, we know that it lies on the left side. and we have to minimize the value so we decreae the right pointer. else we  
  increase the left pointer.
- another thing, we also set res to the highest value in the pile. and as soon as we found a lower value update it. 

# Complexity

- Time: O(nlogn)

- Space: O(n)