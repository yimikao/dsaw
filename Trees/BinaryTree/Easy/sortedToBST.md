## Convert Sorted Array to Binary Search Tree

Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

Example1

```
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:
```

Output1
![Example1](https://assets.leetcode.com/uploads/2021/02/18/btree1.jpg)

Output2
[!Example2](https://assets.leetcode.com/uploads/2021/02/18/btree2.jpg)

Example2
```
Input: nums = [1,3]
Output: [3,1]
Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.
```

Outputs
![](https://assets.leetcode.com/uploads/2021/02/18/btree.jpg)

Constraints:
```
1 <= nums.length <= 10^4
-10^4 <= nums[i] <= 10^4
nums is sorted in a strictly increasing order.
```

```go
/*
Runtime: 0 ms, faster than 100%
Memory Usage: 3.4 MB, less than 76.56%
*/

// input "nums" is already a BST
// but yeah, it might not be height-balanced

//imagine every subtree has [-2,4,9]
func sortedArrayToBST(nums []int) *TreeNode {
    
    lenArray := len(nums)
    // lp := nums[0]
    // rp := nums[lenArray-1]
    
    //how to know we have a nil subtree(lp will be 0 and rp will be lenArray i.e - 1 = -1)
    //0 > -1
    // if lp > rp {
    //     return nil
    // }
    
    if lenArray  == 0 {
        return nil
    }
    
    // if our array is not empty i.e a subtree can be created
    // mid := (rp + lp)/2
    rootSubtree := new(TreeNode)
    leftSubtree := sortedArrayToBST(nums[:lenArray/2])
    rightSubtree := sortedArrayToBST(nums[lenArray/2 + 1:])
    
    rootSubtree.Val = nums[lenArray/2]
    rootSubtree.Left = leftSubtree
    rootSubtree.Right = rightSubtree
    
    return rootSubtree
    
}

//imagine every subtree has [-2,4,9]
//convert this array to height-balanced, binary search tree(subtree)

```
