## Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Example1

![Example1](https://assets.leetcode.com/uploads/2020/11/26/tmp-tree.jpg)
```
Input: root = [3,9,20,null,null,15,7]
Output: 3
```

Example2
```
Input: root = [1,null,2]
Output: 2
```

Constraints:
```
The number of nodes in the tree is in the range [0, 10^4]
-100 <= Node.val <= 100
```

```go
/*
Runtime: 3 ms, faster than 89.50% of Go online submissions for Maximum Depth of Binary Tree.
Memory Usage: 4.1 MB, less than 91.14% of Go online submissions for Maximum Depth of Binary Tree.
*/

Think of it as finding depth of each subtree. Find Depth of what you see, call on children will be/trigger/handle recursion


//total Depth
func maxDepth(root *TreeNode) int {
    if root != nil {

        //get depth of parent subTree
        rootDepth := depthOfSubTree(root)
        
        //get that of each childrenSubTree 
        leftDepth := maxDepth(root.Left)
        rightDepth := maxDepth(root.Right)
        
        //round up/approximate values of children as it's same horizontal level 
        roundUp := MAX(leftDepth, rightDepth)
        
        //return addition of both 
        return rootDepth + roundUp
    }
   //a nil subtree can't have a depth 
    return 0
}

func depthOfSubTree(n *TreeNode) int {
    if n != nil {
        return 1
    }
    return 0
}

func MAX(a, b int) int {
    if a <= b {
        return b
    }
    return a
}

```
