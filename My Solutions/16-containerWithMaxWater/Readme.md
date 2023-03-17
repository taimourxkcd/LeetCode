# My Solution
Works only for the smaller test cases becuaes time limit execeeds

## Complexity
    Time: O(O ^ 2)
    Space: O(O ^ 2)

# Optimized Solution

Works both for smaller and big test cases

## Complexity
    Time: O(n)
    Space: O(1)

## Approch

uses the two pointer approch
one is at the start and other at the end
move from left to right and right to left multiplying the height which is the minimum
the max area is updated with each iteration

we move the pointer for which the height of the container is smaller because increasing the poniter of the container with the bigger height will only decrease the area and width will only decrease with each iteration
