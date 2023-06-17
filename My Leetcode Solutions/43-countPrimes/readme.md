# Problem
- n is given. count the prime numbers upto n

# Approch
- we use Sieve of Eratosthenes algorithm
- the idea is that first we create a vector that is true for n+1 except 0 and 1 since they are not prime
- then we do a loop and go through each element upto n
- if only go for the element if it is not false already
- anyway once we have the element, we make all of its multiples false like eg for 2: we do 4 6 8 etc
- once we have all of that, we count the true in vec and return
- i am not sure what the underlying logic is but it works

# Complexity
- The time complexity of the Sieve of Eratosthenes algorithm implemented here is O(n log log n). The outer loop runs from 2 to sqrt(n), which takes O(sqrt(n)) time. The inner loop runs at most n times, so it takes O(n) time. Therefore, the overall time complexity is O(sqrt(n) * n) = O(n sqrt(n)) = O(n log log n) (using the fact that sqrt(n) = O(log n) as n approaches infinity).

- The space complexity of the algorithm is O(n), as we need to store a boolean value for each number from 0 to n in the vector 'prime'.