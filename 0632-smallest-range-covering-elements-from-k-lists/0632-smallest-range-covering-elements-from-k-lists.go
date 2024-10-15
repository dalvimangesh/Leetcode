func smallestRange(nums [][]int) []int {
    
    // creating a new merged list
    
    var n, leftPointer, cnt int = len(nums), 0, 0
    
    var countK map[int] int = make(map[int] int)
    
    // create a new list {value, list number}
    
    var merged [][]int
    
    for i := 0; i < n; i++ {
        
        var m int = len(nums[i])
        
        for j := 0; j < m; j++ {
            
            merged = append(merged, []int{nums[i][j], i})
            
        }
        
    }
    
    slices.SortFunc(merged, func (a []int, b []int) int {
        return cmp.Compare(a[0], b[0])
    })
    
    var mergedN int = len(merged)
    
    var ansL, ansR int = -100001, 100000;
    
    for i := 0; i < mergedN; i++ {

        // add current element in the map
        
        countK[merged[i][1]]++
        if(countK[merged[i][1]] == 1) { // first time increasing
            cnt++
        }
        
        for cnt == n {
            
            var curL, curR int = merged[leftPointer][0], merged[i][0]
            
            var ans, curAns int = ansR - ansL, curR - curL
            
            if(ans > curAns) {
                
                ansL, ansR = curL, curR
                
            }
            
            // shifting window towards right
            
            countK[merged[leftPointer][1]]--
            if(countK[merged[leftPointer][1]] == 0) {
                cnt--
            }
            
            leftPointer++
        }
        
        
    }
    
    return []int{ansL, ansR}
}