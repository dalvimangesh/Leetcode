
func min(a, b, c int) int {
    
    if(a <= b && a <= c) {
        return a
    } else if (b <= a && b <= c) {
        return b
    }
    return c
}

func solve(i int, j int, matrix [][] int, dp [][] int) int {
    
    var n, m int = len(matrix), len(matrix[0])
    
    if(i < 0 || j < 0 || i >= n || j >= m) {
        return 0
    }
    
    // if current element is zero means no square possible
    
    if(dp[i][j] != -1) {
        return dp[i][j]
    }
    
    if(matrix[i][j] == 0) {
        return 0
    }
    
    var right int = solve(i, j+1, matrix, dp)
    var down int = solve(i+1, j, matrix, dp)
    var diagonal int = solve(i+1, j+1, matrix, dp)
    
    dp[i][j] = 1 + min(right, down, diagonal)
    
    return dp[i][j]
    
}



func countSquares(matrix [][]int) int {
    
    var n, m int = len(matrix), len(matrix[0])
    
    var dp[][] int
    
    for i := 0; i < n; i++ {
        
        var tempDp [] int
        
        for j := 0; j < m; j++ {
            tempDp = append(tempDp, -1)   
        }
        
        dp = append(dp, tempDp)
    }
    
    var ans int = 0
    
    for i := 0; i < n; i++ {
        for j := 0; j < m; j++ {
            ans += solve(i, j, matrix, dp) 
        }    
    }
    
    return ans
}