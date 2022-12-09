package binarytree

/*

Runtime: 0 ms, faster than 100.00% of Go online submissions for Invert Binary Tree.
Memory Usage: 2.1 MB, less than 71.25% of Go online submissions for Invert Binary Tree
*/

// Think of it as inverting each subtree. Is SubTree is reped by each Node
// A binary is imagined to be just the first one encountered
// e.g [4, 5, 6 ....] (of root 4) , imagine the binary to just be 4,5,6 , and each as Node as a subtree.

func InvertTree[T gv](root *TreeNode[T]) *TreeNode[T] {
	if root != nil {
		temp := root.Left
		root.Left = root.Right
		root.Right = temp
		InvertTree(root.Left)
		InvertTree(root.Right)
	}
	return root
}
