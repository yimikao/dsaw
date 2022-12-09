package binarytree

/*
Runtime: 3 ms, faster than 89.50% of Go online submissions for Maximum Depth of Binary Tree.
Memory Usage: 4.1 MB, less than 91.14% of Go online submissions for Maximum Depth of Binary Tree.
*/

// Think of it as finding depth of each subtree. Find Depth of what you see, call on children will be/trigger/handle recursion

//total Depth
func MaxDepth(root *TreeNode) int {
	if root != nil {

		//get depth of parent subTree
		rootDepth := DepthOfSubTree(root)

		//get that of each childrenSubTree
		leftDepth := MaxDepth(root.Left)
		rightDepth := MaxDepth(root.Right)

		//round up/approximate values of children as it's same horizontal level
		roundUp := MAX(leftDepth, rightDepth)

		//return addition of both
		return rootDepth + roundUp
	}
	//a nil subtree can't have a depth
	return 0
}

func DepthOfSubTree(n *TreeNode) int {
	if n != nil {
		return 1
	}
	return 0
}
