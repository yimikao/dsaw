## Same Tree

Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

Example1

![Example1](https://assets.leetcode.com/uploads/2020/12/20/ex1.jpg)
```
Input: p = [1,2,3], q = [1,2,3]
Output: true
```

![Example2](https://assets.leetcode.com/uploads/2020/12/20/ex2.jpg)
```
Input: p = [1,2], q = [1,null,2]
Output: false
```
![Example3](https://assets.leetcode.com/uploads/2020/12/20/ex3.jpg)
```
Input: p = [1,2,1], q = [1,1,2]
Output: false
```

Constraints:
```
The number of nodes in both trees is in the range [0, 100]
-104 <= Node.val <= 104
```

```go
/*
Runtime: 0 ms, faster than 100.00% of Go online submissions for Same Tree.
Memory Usage: 2 MB, less than 100.00% of Go online submissions for Same Tree.
*/

func isSameTree(p *TreeNode, q *TreeNode) bool {
    if p == nil && q == nil {
        return true
    }
    
    if p != nil && q != nil {
        
        valSameInRootSubTree := valueOfSubTreeIsEqual(p,q)
        
        isSameTreeLeftSubTree := isSameTree(p.Left, q.Left)
        isSameTreeRightSubTree := isSameTree(p.Right, q.Right)
        
        return (valSameInRootSubTree && isSameTreeLeftSubTree && isSameTreeRightSubTree)
    }
    
    return false
}

func valueOfSubTreeIsEqual(node1 *TreeNode, node2 *TreeNode) bool {
        if node1.Val != node2.Val {
            return false
        }
        return true
}


```
