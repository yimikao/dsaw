package binarytree

/*
Runtime: 19 ms, faster than 6.75% of Go online submissions for Diameter of Binary Tree.
Memory Usage: 4.5 MB, less than 28.62% of Go online submissions for Diameter of Binary Tree.
*/

//note that this means we find
func DiameterOfbinary[T gv](root *TreeNode[T]) int {
	if root != nil {

		lenLeftSubTree := LengthChildSubTrees(root.Left)
		lenRightSubTree := LengthChildSubTrees(root.Right)

		diaRootSubTree := lenLeftSubTree + lenRightSubTree

		diaLeftSubTree := DiameterOfbinary(root.Left)
		diaRightSubTree := DiameterOfbinary(root.Right)

		maxDiaChildrenSubTrees := MAX(diaLeftSubTree, diaRightSubTree)

		maxDiaBinTree := MAX(diaRootSubTree, maxDiaChildrenSubTrees)

		return maxDiaBinTree

	}
	return 0
}

func LengthChildSubTrees[T gv](root *TreeNode[T]) int {
	if root != nil {
		lenRoot := 1
		lenLeft := LengthChildSubTrees(root.Left)
		lenRight := LengthChildSubTrees(root.Right)

		lenSubTree := lenRoot + MAX(lenLeft, lenRight)
		return lenSubTree
	}
	return 0
}
