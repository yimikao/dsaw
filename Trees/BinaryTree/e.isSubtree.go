package binarytree

/*
Runtime: 41 ms, faster than 5.29% of Go online submissions for Subtree of Another Tree.
Memory Usage: 7.2 MB, less than 17.55% of Go online submissions for Subtree of Another Tree.
*/

func IsSubtree(root *TreeNode, subRoot *TreeNode) bool {

	if root == nil && subRoot == nil {
		return true
	}

	if root != nil && subRoot == nil {
		return true
	}

	if root == nil && subRoot != nil {
		return false
	}

	if root.Val == subRoot.Val {
		//if root and subRoot match, check all the way down
		if SubTreesAreSame(root, subRoot) {
			return true
		}
	}

	//try to find at least a place where root and subRoot match
	return IsSubtree(root.Left, subRoot) || IsSubtree(root.Right, subRoot)

}

func SubTreesAreSame(node1, node2 *TreeNode) bool {
	if node1 == nil && node2 == nil {
		return true
	}

	if node1 != nil && node2 != nil {
		if node1.Val == node2.Val {
			//check all the way down
			return SubTreesAreSame(node1.Left, node2.Left) && SubTreesAreSame(node1.Right, node2.Right)
		}
	}

	return false
}
