func lowerBound(arr []int, value int) int {
    
    // using binary search
    
    var low, high int = 0, len(arr) -1
    
    for low <= high {
        
        var mid int = low + (high - low) / 2
        
        if value <= arr[mid] {
            high = mid - 1
        } else {
            low = mid + 1
        }
    }
    
    return low
}

func GetCountLIS(nums []int) []int {
    
    var LToR, dp [] int
    
    var n int = len(nums)
    
    for i := 0; i < n; i++ {
        
        var lb int = lowerBound(dp, nums[i])
        
        if lb == len(dp) { // lb does not exist
            
            dp = append(dp, nums[i])
            
        } else {
            dp[lb] = nums[i]
        }
        
        LToR = append(LToR, len(dp))
    }
    
    return LToR
}

func min(a int, b int) int {
    
    if a <= b {
        return a
    }
    
    return b
}

func minimumMountainRemovals(nums []int) int {
    
    var n int = len(nums)
    
    var rNums [] int = make([]int, n)
    
    copy(rNums, nums)
    
    for i, j := 0, n-1; i < j; i, j = i+1, j-1 {
      rNums[i], rNums[j] = rNums[j], rNums[i]  //reverse the slice
    }
    
    var LToR []int = GetCountLIS(nums)
    var RToL []int = GetCountLIS(rNums)
    
    for i, j := 0, n-1; i < j; i, j = i+1, j-1 {
      RToL[i], RToL[j] = RToL[j], RToL[i]  //reverse the slice
    }
    
    var ans int = 0
    
    fmt.Println(LToR)
    fmt.Println(RToL)
    
    for i := 0; i <n; i++ {
        
        // fmt.Println(ans, (LToR[i] + RToL[i] - 1))
        
        if(LToR[i] > 1 && RToL[i] > 1 && ((LToR[i] + RToL[i] - 1) > ans)) {
            
            ans = LToR[i] + RToL[i] - 1
            
        }
        
    }
    
    // fmt.Println(ans)
    
    return n - ans
}

// LIS
// array length is atleast 3 so we must have atleast one-one element on the both side
// 1 2 4 5 6 7

/*

1 1 1 1 1 2 3 3
4 3 2 2 2 2 2 1

*/