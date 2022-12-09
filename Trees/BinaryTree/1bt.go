package binarytree

type TreeNode[T gv] struct {
	Val         T
	Left, Right *TreeNode[T]
}

type gv interface {
	int | int8 | int16 | int32 | int64 | float32 | float64 | string
}
