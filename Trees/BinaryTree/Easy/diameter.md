## 

dsdsdsdsdsdsdsd

Example1

![Example1]()
```

```

Example2
```

```

Constraints:
```
The 
dsdsd
```

```go
/*

*/


//note that this means we find 
func diameterOfBinaryTree(root *TreeNode) int {
    if root != nil {
        
        lenLeft := pathFromRoot(root.Left)
        lenRight := pathFromRoot(root.Right)
        
        diaRoot := lenLeft + lenRight
        
        diaLeft := diameterOfBinaryTree(root.Left)
        diaRight := diameterOfBinaryTree(root.Right)
        
        maxDiaChildren := MAX(diaLeft, diaRight)
        
        maxDiaSubtree := MAX(diaRoot, maxDiaChildren)
        
        return maxDiaSubtree
        
    }
    return 0
}

func pathFromRoot(root *TreeNode) int {
    if root != nil {
        lenRoot := 1
        lenLeft := pathFromRoot(root.Left)
        lenRight := pathFromRoot(root.Right)
        
        lenSubTree := lenRoot + MAX(lenLeft, lenRight)
        return lenSubTree
    }
    return 0
}


func MAX(a,b int) int {
    if a <= b {
        return b
    }
    return a
}






```
