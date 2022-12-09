package arrayhash

/*

TIME: O(n)
SPACE: O(n)

Runtime: 69 ms, faster than 96.17% of Go online submissions for Contains Duplicate.
Memory Usage: 9.2 MB, less than 42.65% of Go online submissions for Contains Duplicate.
*/

func ContainsDuplicate(nums []int) bool {
	// use anonymous struct, very fast
	var set = make(map[int]struct{})

	for _, n := range nums {
		if _, ok := set[n]; ok {
			return true
		} else {
			set[n] = struct{}{}
		}
	}
	return false
}
