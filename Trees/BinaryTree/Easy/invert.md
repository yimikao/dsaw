## Given the root of a binary tree, invert the tree, and return its root.

Example1

![Example1](https://assets.leetcode.com/uploads/2021/03/14/invert1-tree.jpg)
```
Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]
```

Example2
```
Input: root = []
Output: []
```

Constraints:
```
The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
```

```go
/*

Runtime: 0 ms, faster than 100.00% of Go online submissions for Invert Binary Tree.
Memory Usage: 2.1 MB, less than 71.25% of Go online submissions for Invert Binary Tree
*/

Think of it as inverting each subtree. Invert first and pass on



func invertTree(root *TreeNode) *TreeNode {
    if root != nil {
        temp := root.Left
        root.Left = root.Right
        root.Right = temp
        invertTree(root.Left)
        invertTree(root.Right)
    }
    return root
}
```
