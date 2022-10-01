## Binary Tree Inorder Traversal

Given the root of a binary tree, return the inorder traversal of its nodes' values.

Example1

![Example1](https://assets.leetcode.com/uploads/2020/09/15/inorder_1.jpg)
```
Input: root = [1,null,2,3]
Output: [1,3,2]
```

Example2
```
Input: root = []
Output: []
```
Example3
```
Input: root = [1]
Output: [1]
```

Constraints:
```
The number of nodes in the tree is in the range [0, 100]
-100 <= Node.val <= 100
```

```go
/*
Runtime: 0 ms, faster than 100.00%
Memory Usage: 2.1 MB, less than 27.88% 
*/


func inorderTraversal(root *TreeNode) []int {
    var res = []int{}
    
    if root != nil {
        
        leftSubTree := inorderTraversal(root.Left)
        ok, rootSubTree := traverseSubTree(root)
        rightSubTree := inorderTraversal(root.Right)
        
        res = append(res, leftSubTree...)
        if ok {
            res = append(res, rootSubTree)
        }
        res = append(res, rightSubTree...)
    }   
    return res
}

func traverseSubTree(node *TreeNode) (bool ,int) {
    if node != nil {
        return true, node.Val
    }
    return false, 0
}

```