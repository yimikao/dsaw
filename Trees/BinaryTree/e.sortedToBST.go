package binarytree

/*
Runtime: 0 ms, faster than 100%
Memory Usage: 3.4 MB, less than 76.56%
*/

// input "nums" is already a BST
// but yeah, it might not be height-balanced

//imagine every subtree has [-2,4,9]
func SortedArrayToBST[T gv](nums []T) *TreeNode[T] {

	lenArray := len(nums)
	// lp := nums[0]
	// rp := nums[lenArray-1]

	//how to know we have a nil subtree(lp will be 0 and rp will be lenArray i.e - 1 = -1)
	//0 > -1
	// if lp > rp {
	//     return nil
	// }

	if lenArray == 0 {
		return nil
	}

	// if our array is not empty i.e a subtree can be created
	// mid := (rp + lp)/2
	rootSubtree := new(TreeNode[T])
	leftSubtree := SortedArrayToBST(nums[:lenArray/2])
	rightSubtree := SortedArrayToBST(nums[lenArray/2+1:])

	rootSubtree.Val = nums[lenArray/2]
	rootSubtree.Left = leftSubtree
	rootSubtree.Right = rightSubtree

	return rootSubtree

}

//imagine every subtree has [-2,4,9]
//convert this array to height-balanced, binary search tree(subtree)
