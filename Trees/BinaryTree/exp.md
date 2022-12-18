![diagram of bin tree](https://static.studytonight.com/data-structures/images/binary-search-tree-1.png)


## KEY TO UNDERSTAND AND CLEAR CONFUSION

Trees can be brokken down to three main concepts:
- VIEW: the current tree you can see. Can be ROOT VIEW, LEFT CHILD VIEW, RIGHT CHILD VIEW.
- NODE: a node in that view

Is SubTree is reped by each Node
A binary is imagined to be just the first one encountered
e.g [4, 5, 6 ....] (of root 4) , imagine the binary to just be 4,5,6 , and each as Node as a subtree.

#### Binary Tree: Common Terminologies
- Leaf/External node: Node with no children.
- Internal node: Node with atleast one children.
- Depth of a node: Number of edges from root to the node. We count "NODES" down to the LEAVES to NODE. In recursion every Nil TreeNode return 0 (signifying absense of subTree)
- Height of a node: Number of edges from the node to the deepest leaf. Height of the tree is the height of the root. We count "EDGES" upwards to Deepest(Farthest) Leaf Node. In recursion every Nil TreeNode return -1 (signifying absense of subTree). -1 cancels out 1 of Node.


#### Trees are so useful and frequently used, because they have some very serious advantages:
- Trees reflect structural relationships in the data.
- Trees are used to represent hierarchies.
- Trees provide an efficient insertion and searching.

#### Tree Traversals
DepthFirst
- [PreOrder](#preorder)
- [InOrder](#inorder)
- [PostOrder](#postorder)
BreadthFirst
- [LevelOrder](#levelorder)

```go
//TreeNodes are SubTrees of SubTrees
//Every TreeNode represents a SubTree
type TreeNode struct {
    Data int
    Left, Right *TreeNode
}
```


#### PreOrder
```go


//Recursive PreOrder
//Time Comp: O(N)
//Space Comp: If we don’t consider the size of the stack for function calls then O(1) otherwise O(H) where H is the height of the tree. 
func PreOrder(root *TreeNode) {
    if root != nil {
        //Visit the node pointed to by root before PreOrdering children
        print(root)
        PreOrder(root.Left)
        PreOrder(root.Right)
    }
}

//Iterative PreOrder (First Approach)
//Time Comp: O(N)
//Space Comp: O(H), where H is the height of the tree. (But is it not depth)
func PreOrder(root *TreeNode) {
    if root != nil {
        //stack of pointer to tree nodes
        stk := []TreeNode{}
        //add curr TreeNode
        stk = append(stk, curr)

        //condition to keep iteration-> we have TreeNodes to process
        for len(stack) != 0 {
            curr := stk.Pop()
            print(curr)

            //PreOrder left and right (Left will be atop stack from end)
            if curr.Right != nil {
                stk = append(stk, curr.Right)
            }
            if curr.Left != nil {
                stk = append(stk, curr.Left)
            }

        }
    }
}

Iterative PreOrder (Second Approach) https://www.geeksforgeeks.org/iterative-preorder-traversal/
Time Comp: O(N)
Space Comp: O(H), , where H is the height of the tree. (But is it not depth)
func PreOrder(root *TreeNode) {
    if root != nil {
        curr := root
        //stack of pointer to tree nodes
        stk := []TreeNode{}
        //add curr TreeNode
        stk = append(stk, curr)

        //condition to keep iteration-> left still exists or we have TreeNodes to process
        for curr != nil || len(stack) != 0 {
            print(curr)
            curr := curr.Left
            //PreOrder left and Right
            if curr.Left != nil {
                stk = append(stk, curr.Left)
            }
            if curr.Right != nil {
                stk = append(stk, curr.Right)
            }

        }
    }
}

```

#### InOrder
```go
//Time Comp: O(N)
//Space Comp: If we don’t consider the size of the stack for function calls then O(1) otherwise O(H) where H is the height of the tree. 
func Inorder(root *TreeNode) {

}

```
