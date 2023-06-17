# Problem
- return the element that occurs a single time in the array

# Approch
- since we know that XOR gives 0 for the elements that are equal
- so what we did is that. we run a loop every time and xor with the element and add it.
- since all other elements occur more then once, so we get a zero
- at the end we have the number that occurs only 1 time

# Complexity
- Time O(n)

- Space O(1)