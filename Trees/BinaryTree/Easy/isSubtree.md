## 572. Subtree of Another Tree

Given the roots of two binary trees root and subRoot, return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise.

A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. The tree tree could also be considered as a subtree of itself.

Example1

![Example1](https://assets.leetcode.com/uploads/2021/04/28/subtree1-tree.jpg)
```
Input: root = [3,4,5,1,2], subRoot = [4,1,2]
Output: true
```

![Example2](https://assets.leetcode.com/uploads/2021/04/28/subtree2-tree.jpg)
```
Input: root = [3,4,5,1,2,null,null,null,null,0], subRoot = [4,1,2]
Output: false
```

Constraints:
```
The number of nodes in the root tree is in the range [1, 2000].
The number of nodes in the subRoot tree is in the range [1, 1000].
-10^4 <= root.val <= 10^4
10^4 <= subRoot.val <= 10^4
```

```go
/*
Runtime: 41 ms, faster than 5.29% of Go online submissions for Subtree of Another Tree.
Memory Usage: 7.2 MB, less than 17.55% of Go online submissions for Subtree of Another Tree.
*/

func isSubtree(root *TreeNode, subRoot *TreeNode) bool {

    if root == nil && subRoot == nil {
        return true
    }
    
    if root != nil && subRoot == nil {
        return true
    }
    
    if root == nil  && subRoot != nil {
        return false
    }
    
    if root.Val == subRoot.Val {
        //if root and subRoot match, check all the way down
        if subTreesAreSame(root, subRoot) {
            return true
        }
    }
    
    //try to find at least a place where root and subRoot match
    return isSubtree(root.Left, subRoot) || isSubtree(root.Right, subRoot)
    
}

func subTreesAreSame(node1,node2 *TreeNode) bool {
    if node1 == nil && node2 == nil {
        return true
    }
    
    if  node1 != nil && node2 != nil {
        if node1.Val == node2.Val {
            //check all the way down
            return subTreesAreSame(node1.Left, node2.Left) && subTreesAreSame(node1.Right, node2.Right)
        }
    }
    
    return false
}



```