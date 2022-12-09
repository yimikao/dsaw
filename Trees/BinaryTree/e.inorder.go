package binarytree

/*
Runtime: 0 ms, faster than 100.00%
Memory Usage: 2.1 MB, less than 27.88%
*/

func InorderTraversal[T gv](root *TreeNode[T]) []T {
	var res = []T{}

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

func TraverseSubTree[T gv](node *TreeNode[T]) (bool, T) {
	if node != nil {
		return true, node.Val
	}
	return false, T(0)
}
