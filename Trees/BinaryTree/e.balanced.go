package binarytree

/*
Runtime: 7 ms, faster than 81.26% of Go online submissions for Balanced Binary Tree.
Memory Usage: 5.7 MB, less than 100.00% of Go online submissions for Balanced Binary Tree.
*/

// checks if all views are balanced/ compares all root, left and right views
func isBalanced(root *TreeNode) bool {
	// CHECK FOR ROOT VIEW
	// 1. if root is non-nil
	if root != nil {
		// get height of left node
		leftNodeHeight := getNodeHeight(root.Left)
		// get height of right node
		rightNodeHeight := getNodeHeight(root.Right)

		diffRootView := compareHeights(leftNodeHeight, rightNodeHeight)

		// CHECK FOR LEFT VIEW
		diffLeftView := isBalanced(root.Left)
		// CHECK FOR RIGHT VIEW
		diffRightView := isBalanced(root.Right)

		// COMPARE ALL VIEWS
		return diffRootView && diffLeftView && diffRightView
	}

	//2. if root is nil
	return true
}

//gets the height of each node of a view
func getNodeHeight(n *TreeNode) int {
	if n != nil {
		// node is a left node node
		if n.Left == nil && n.Right == nil {
			return 0
		}
		// node is not a leaf node
		return 1 + max(getNodeHeight(n.Left), getNodeHeight(n.Right))
	}
	return -1
}

// checks if view is balanced i.e diff in height of the child nodes is not greater than 1
func compareHeights(a, b int) bool {
	if a > b || a == b {
		return !(a-b > 1)
	}
	return !(-1*(a-b) > 1)
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

/*
func IsBalanced[T gv](root *TreeNode[T]) bool {

	if root != nil {

		heightOfLeftSubTree := HeightOfSubTrees(root.Left)
		heightOfRightSubTree := HeightOfSubTrees(root.Right)

		var diff int

		diff = Abs(heightOfRightSubTree, heightOfLeftSubTree)
		//OR
		// if heightOfRightSubTree >= heightOfLeftSubTree {
		//     diff = heightOfRightSubTree - heightOfLeftSubTree
		// }else {
		//     diff = heightOfLeftSubTree - heightOfRightSubTree
		// }

		return diff < 2 && IsBalanced(root.Left) && IsBalanced(root.Right)

	}

	return true

}

func HeightOfSubTrees[T gv](node *TreeNode[T]) int {
	if node != nil {
		heightOfNode := 1
		heightOfLeftSubTree := HeightOfSubTrees(node.Left)
		heightOfRightSubTree := HeightOfSubTrees(node.Right)

		heightOfSubTree := heightOfNode + MAX(heightOfLeftSubTree, heightOfRightSubTree)

		return heightOfSubTree
	}
	return 0
}

func Abs(a, b int) int {
	diff := b - a
	if diff < 0 {
		return -1 * diff
	}
	return diff
}

func MAX(a, b int) int {
	if a <= b {
		return b
	}
	return a
}
*/
