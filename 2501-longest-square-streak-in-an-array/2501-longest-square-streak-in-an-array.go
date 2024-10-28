func max(a int, b int) int {
    
    if a >= b {
        return a
    }
    return b
}

func longestSquareStreak(nums []int) int {
    
    
    var dp map[int]int = make(map[int]int)
    var ans int
    
    slices.Sort(nums)
    
    for _, ele := range nums {
        
        // first check if given number is square or not
        
        var sqrt int = int(math.Sqrt(float64(ele)))
        
        if sqrt*sqrt == ele {
            
            dp[ele] = 1 + dp[sqrt]
            ans = max(ans, dp[ele])
            
        } else {
            dp[ele] = 1
        }
        
    }
    
    if ans < 2 {
        ans = -1
    }
    
    return ans
}