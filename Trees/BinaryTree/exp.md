![diagram of bin tree](https://static.studytonight.com/data-structures/images/binary-search-tree-1.png)


#### Binary Tree: Common Terminologies
- Leaf/External node: Node with no children.
- Internal node: Node with atleast one children.
- Depth of a node: Number of edges from root to the node. We count "NODES" down to the LEAVES to NODE. In recursion every Nil TreeNode return 0 (signifying absense of subTree)
- Height of a node: Number of edges from the node to the deepest leaf. Height of the tree is the height of the root. We count "EDGES" upwards to Deepest(Farthest) Leaf Node. In recursion every Nil TreeNode return -1 (signifying absense of subTree). -1 cancels out 1 of Node.


```go

//TreeNodes are SubTrees of SubTrees
//Every TreeNode represents a SubTree
type TreeNode struct {
    Data int
    Left, Right *TreeNode
}




```
