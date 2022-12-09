package binarytree

/*
Runtime: 7 ms, faster than 81.26% of Go online submissions for Balanced Binary Tree.
Memory Usage: 5.7 MB, less than 100.00% of Go online submissions for Balanced Binary Tree.
*/

func IsBalanced(root *TreeNode) bool {

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

func HeightOfSubTrees(node *TreeNode) int {
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
