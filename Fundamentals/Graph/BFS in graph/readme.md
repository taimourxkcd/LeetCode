# Approch
- we make a vector ans. this will store the result of BFS
- we are given the edges, so first we need to create an Adjacency list. for that we will use an unorderedmap
- then we need another map that is going to keep track of the nodes that have already been visited
- we create the adjacency list
- then we move to every node in the graph if it is not visited
- now we call bfs.
- here we are going to need a queue, this is going to keep track of what node has been visited.
- then we mark that node as visited
- then run a loop while your queue is not empty
- get the frontnode from the queue, store it in a variable frontNode and pop it from the queue
- traverse all the neighbours of frontnode. (The ones you stored in adjacency list)
- if the neighbours are not visited then push them inside the queue and mark them as visited. dont confuse with the earlier visited(that was for the 
   node itself, this is for its neighbours).  