# Problem
- if we are given k = 3, then we have to rotate the each element in the array to 3 positions ahead and the ones at the end would come at start..

# Approch
- i need to look it again b/c this solution does not make much sense to me
- the first line is so that we dont have to do rotations many time. its same as the circle, if you rotate 20 times, you reach the same point, that logic
- so what we have done is that if k is 20 then its remainder with the size of the array would tell us how far ahead we have to move in the array.
- after that we do three steps
    - reverse the whole array
    - reverse the array upto k.
    - reverse the array from k+1 to end.
- from where i did this the person said that its common sense but i think it was some algorithm like how do we even know to reverse it. then reverse upto
 k and then from k to end. i dont think this could be done with common sense

# Complexity

- Time: O(n) 

- Space: O(1) 