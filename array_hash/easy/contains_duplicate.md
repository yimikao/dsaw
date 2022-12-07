## Contains Duplicate

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


```go
/*

TIME: O(n)
SPACE: O(n)

Runtime: 69 ms, faster than 96.17% of Go online submissions for Contains Duplicate.
Memory Usage: 9.2 MB, less than 42.65% of Go online submissions for Contains Duplicate.
*/

func ContainsDuplicate(nums []int) {
    // use anonymous struct, very fast
    var set = make(map[int]struct{})

    for _, n := range nums {
        if _, ok := set[n]; ok {
            return true
        }else {
            set[n] = struct{}{}
        }
    }
    return false
}


```

