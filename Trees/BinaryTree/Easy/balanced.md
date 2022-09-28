## Balanced Binary Tree

Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

    a binary tree in which the left and right subtrees of every node differ in height by no more than 1.


Example1

![Example1](https://assets.leetcode.com/uploads/2020/10/06/balance_1.jpg)
```
Input: root = [3,9,20,null,null,15,7]
Output: true
```

Example2
![Example2](https://assets.leetcode.com/uploads/2020/10/06/balance_2.jpg)
```
Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
```

Example3
```
Input: root = []
Output: true
```

Constraints:
```
The number of nodes in the tree is in the range [0, 5000]
-104 <= Node.val <= 104
```

```go
/*
Runtime: 7 ms, faster than 81.26% of Go online submissions for Balanced Binary Tree.
Memory Usage: 5.7 MB, less than 100.00% of Go online submissions for Balanced Binary Tree.
*/

func isBalanced(root *TreeNode) bool {
  
    if root != nil {

        heightOfLeftSubTree := heightOfSubTrees(root.Left)
        heightOfRightSubTree := heightOfSubTrees(root.Right)

        var diff int
        
        diff = abs(heightOfRightSubTree, heightOfLeftSubTree)
        //OR
        // if heightOfRightSubTree >= heightOfLeftSubTree {
        //     diff = heightOfRightSubTree - heightOfLeftSubTree
        // }else {
        //     diff = heightOfLeftSubTree - heightOfRightSubTree
        // }
        
        return diff < 2 && isBalanced(root.Left) && isBalanced(root.Right)
        
    }
    
    return true
    
}

func heightOfSubTrees(node *TreeNode) int {
    if node != nil {
        heightOfNode := 1
        heightOfLeftSubTree := heightOfSubTrees(node.Left)
        heightOfRightSubTree := heightOfSubTrees(node.Right)
        
        heightOfSubTree := heightOfNode + MAX(heightOfLeftSubTree, heightOfRightSubTree)
        
        return heightOfSubTree
    }
    return 0
}


func abs(a, b int) int {
    diff := b-a
    if diff < 0 {
        return -1 * diff
    }
    return diff
}

func MAX(a,b int) int {
    if a <= b {
        return b
    }
    return a
}


```
