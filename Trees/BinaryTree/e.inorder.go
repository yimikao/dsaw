package binarytree

/*
Runtime: 0 ms, faster than 100.00%
Memory Usage: 2.1 MB, less than 27.88%
*/

func InorderTraversal(root *TreeNode) []int {
	var res = []int{}

	if root != nil {

		leftSubTree := InorderTraversal(root.Left)
		ok, rootSubTree := TraverseSubTree(root)
		rightSubTree := InorderTraversal(root.Right)

		res = append(res, leftSubTree...)
		if ok {
			res = append(res, rootSubTree)
		}
		res = append(res, rightSubTree...)
	}
	return res
}

func TraverseSubTree(node *TreeNode) (bool, int) {
	if node != nil {
		return true, node.Val
	}
	return false, 0
}
