# Problem Statement
You are given a matrix. find the biggest prime no present in its diagonals 

# Approch

- make a func isPrime() to verify if its prime
- loop throught the whole matrix
- every time i==j or i+j == n-1, we have a diagonal element
- so everytime we encounter the element, we check if its prime
- if prime then we push it in a new vector called res
- at the end we remove duplicates from res and return max
- if res is empty return 0 (see leetcode submission if not available)

# Complexity
- time: O(n^2)
- space: O(n)