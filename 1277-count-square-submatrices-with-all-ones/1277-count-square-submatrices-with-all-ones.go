
var dp[301][301] int

func min(a, b, c int) int {
    
    if(a <= b && a <= c) {
        return a
    } else if (b <= a && b <= c) {
        return b
    }
    return c
}

func solve(i int, j int, matrix [][] int) int {
    
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
    
    var right int = solve(i, j+1, matrix)
    var down int = solve(i+1, j, matrix)
    var diagonal int = solve(i+1, j+1, matrix)
    
    dp[i][j] = 1 + min(right, down, diagonal)
    
    return dp[i][j]
    
}



func countSquares(matrix [][]int) int {
    
    var n, m int = len(matrix), len(matrix[0])
    
    for i := 0; i < n; i++ {
        for j := 0; j < m; j++ {
            dp[i][j] = -1   
        }    
    }
    
    var ans int = 0
    
    for i := 0; i < n; i++ {
        for j := 0; j < m; j++ {
            ans += solve(i, j, matrix) 
        }    
    }
    
    return ans
}