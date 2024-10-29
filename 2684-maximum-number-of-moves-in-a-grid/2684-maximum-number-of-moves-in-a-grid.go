func max(a int, b int) int {
    
    if a >= b {
        return a
    }
    
    return b
}

func solve(i int, j int, grid[][] int, dp[][] int) int {
    
    var n, m int = len(grid), len(grid[0])
    
    // even if we are at the last column we cant go on right side
    if(i < 0 || i >= n || j < 0 || j >= m-1) {
        return 0
    }
    
    if (dp[i][j] != -1) {
        return dp[i][j]
    }
    
    var ans int = 0
    
    if (grid[i][j] < grid[i][j+1]) {
        ans = max(ans, 1 + solve(i, j+1, grid, dp))
    }
    
    if(i - 1 >= 0 && grid[i][j] < grid[i-1][j+1]) {
        ans = max(ans, 1 + solve(i-1, j+1, grid, dp))
    }
    
    if(i + 1 < n && grid[i][j] < grid[i+1][j+1]) {
        ans = max(ans, 1 + solve(i+1, j+1, grid, dp))
    }
    
    dp[i][j] = ans
    
    return ans
}

func maxMoves(grid [][]int) int {
    
    var dp [][]int
    
    var n, m, ans int = len(grid), len(grid[0]), 0
    
    for i := 0; i < n; i++ {
        
        var tempDp []int
        
        for j := 0; j < m; j++ {
            
            tempDp = append(tempDp, -1)
            
        }
        
        dp = append(dp, tempDp)
        
    }
    
    for i := 0; i < n; i++ {
        
        ans = max(ans, solve(i, 0, grid, dp))
        
    }
    
    return ans
}