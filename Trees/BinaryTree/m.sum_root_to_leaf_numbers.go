package binarytree

/*
SPACE COMPLEXITY: O(n) for recursion
TIME COMPLEXITY: O(n) to reach all nodes
*/

// wrapper function
func sumNumbers(root *TreeNode) int {
	// FINAL ANSWER TO BE RETURNED
	// This value will be passed do to be finally updated at the leaves
	var sum int

	// GET FOR ROOT VIEW
	// 1. if root is non nil
	if root != nil {
		// for each view pass the current accumulated value at each root node (i.e sum) along side the sum pointer
		passSumToNode(root, sum, &sum)
		return sum
	}

	// 2. if root is nil (BASE CASE)
	// basically return 0
	return sum

}

// helper
func passSumToNode(n *TreeNode, v int, sum *int) {
	//if node is non nil
	if n != nil {
		// if node is a leaf node
		if n.Left == nil && n.Right == nil {
			// finally update sum
			*sum += (v * 10) + n.Val
			return
		}
		// if node is not a leaf node
		// calculate current val and continue to pass down
		val := (v * 10) + n.Val
		passSumToNode(n.Left, val, sum)
		passSumToNode(n.Right, val, sum)
	}
	return
}
