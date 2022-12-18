package binarytree

/*
Runtime: 0 ms, faster than 100.00% of Go online submissions for Same Tree.
Memory Usage: 2 MB, less than 100.00% of Go online submissions for Same Tree.
*/

func isSameTree(p *TreeNode, q *TreeNode) bool {
	// CHECK FOR ROOT TREE VIEW
	// 1. if both parent nodes exist
	if p != nil && q != nil {
		parentNodes := compareNodes(p, q)
		leftNodes := compareNodes(p.Left, q.Left)
		rightNodes := compareNodes(p.Right, q.Right)
		rootTreeView := parentNodes && leftNodes && rightNodes

		// CHECK FOR LEFT TREE VIEW
		leftTreeView := isSameTree(p.Left, q.Left)

		// CHECK FOR RIGHT TREE VIEW
		rightTreeView := isSameTree(p.Right, q.Right)

		// COMPARE ALL VIEWS
		return rootTreeView && leftTreeView && rightTreeView
	}

	//2. if one exists
	if p == nil && q != nil {
		return false
	}

	if p != nil && q == nil {
		return false
	}

	//3. both nil
	return true
}

// this compares each nodes of a Tree View
func compareNodes(n *TreeNode, m *TreeNode) bool {
	// both non-nil
	if n != nil && m != nil {
		if n.Val != m.Val {
			return false
		}
		return true
	}
	// one nil, other isn't
	if n == nil && m != nil {
		return false
	}

	if n != nil && m == nil {
		return false
	}

	// both nil
	return true
}

/*
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
*/
