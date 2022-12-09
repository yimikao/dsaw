package binarytree

/*
Runtime: 0 ms, faster than 100.00% of Go online submissions for Same Tree.
Memory Usage: 2 MB, less than 100.00% of Go online submissions for Same Tree.
*/

func IsSameTree[T gv](p *TreeNode[T], q *TreeNode[T]) bool {
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

func ValueOfSubTreeIsEqual[T gv](node1 *TreeNode[T], node2 *TreeNode[T]) bool {
	if node1.Val != node2.Val {
		return false
	}
	return true
}
