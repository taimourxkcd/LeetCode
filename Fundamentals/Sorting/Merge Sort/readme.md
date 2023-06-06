https://algorithm-visualizer.org/divide-and-conquer/merge-sort

# Approch
- first we divide the array recursively until we have a single element left. and then we start merging them.
- to do the division, we pass the starting and ending index along with the array.
- here we find the mid and keep dividing the array
- then in the merging process we do all the left divided array first and then the right  [Gif](https://codepumpkin.com/merge-sort-sorting-algorithm/)
- in the merging process we do the following things
    - we keep merging until both indexs are < there length
    - we will create two new vectors
    - so we find the mid and the length of both arrays
    - once we have both vectors we copy all the values from original array accordingly
    - then we merge
    - in merging we keep 3 indexes. two for new arrays and 'k' for the original array
    - based on the if else condition we copy elements in original array
    - at the end we are inevitably left with some elements in either first or second subarry
    - to handle that case, we run a while loop for both of them to copy the remaining elements

# Complexity: 
- Time: O(nlogn)

- Space: O(n)