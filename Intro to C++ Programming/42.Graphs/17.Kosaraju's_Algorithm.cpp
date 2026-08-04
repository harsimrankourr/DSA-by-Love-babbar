/*
Kosaraju's Algorithm is a linear time algorithm to find the strongly connected components of the a directed graph.

0 <-- 4
|   /
|  /
1 ----> 2 <----> 3

Here are two strongly connected components
    One contains 1,0,4
    and other contains 2,3

    coz when we start from 1 we cxan reach through every element of the component. Same as when we starts from 0 and 4 
    we can also then traverse every element of the component.

    Similarly when we start from 2 we can traverse 3 and when start from 3 we can traverse 2.
    So 2 and 3 is another strongly connected component.

To check the stringly connected components 
    start traversal from such an element from where backtrack isn't possible.

Topological sort will be required

Kosaraju's Algorithm :
                    - Sort all nodes basis on their finishing time.(topological sort)
                    - Transpose of graph(Change the direction of edges)
                    - call dfs count/print on the sort obtained

*/