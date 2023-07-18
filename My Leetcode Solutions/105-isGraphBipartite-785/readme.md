# Problem
- we have to find if a graph is bipartite. meaning that it can be cut into two parts such that the nodes are connected

# Approch
- we can use both BFS and DFS here. i used bfs
- First we have a visited array, -1 is no color, 1 represents color blue and 0 represents color red
- we make visited equal to the size of the graph, so we check for evey sub array, adjacency list ? in the graph.
- then whenever there is a -1, we run a dfs which either gives us a true or false.
- in the DFS, we make a queue and push the very first color in it. 
- we assign a default color like red.
- then we run into the queue as long as it is not empty.
- store the first element in the queue in a variable and pop it from the queue.
- we get the color assigned to it and store it in a variable called curColor, either -1, 0 or 1
- then we take take the color we have and compare it with every color in the corresponsing sub-array in graph.
- if they become equal then we return false b/c two same colors in two connected Nodes.
- and if it is equal to -1, then it means that the no color is assigned. so we push it in the queue and assign it a color.
- but i am not clear why do we do 1 -. instead of just assigning it 1 ```visited[neigh] = 1 - curColor;  ```
- if everything goes fine then the dfs returns true.

# Complexity

- Time: O(V + E) iterations, where E is the number of edges in the graph.

- Space: O(V) // v is the number of the vertices