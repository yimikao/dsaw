package binarytree

/*
Runtime: 0 ms, faster than 100.00% of Go online submissions for Same Tree.
Memory Usage: 2 MB, less than 100.00% of Go online submissions for Same Tree.
*/

func IsSameTree(p *TreeNode, q *TreeNode) bool {
	if p == nil && q == nil {
		return true
	}

	if p != nil && q != nil {

		valSameInRootSubTree := ValueOfSubTreeIsEqual(p, q)

		isSameTreeLeftSubTree := IsSameTree(p.Left, q.Left)
		isSameTreeRightSubTree := IsSameTree(p.Right, q.Right)

		return (valSameInRootSubTree && isSameTreeLeftSubTree && isSameTreeRightSubTree)
	}

	return false
}

func ValueOfSubTreeIsEqual(node1 *TreeNode, node2 *TreeNode) bool {
	if node1.Val != node2.Val {
		return false
	}
	return true
}
