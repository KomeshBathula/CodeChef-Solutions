import java.util.Arrays;

class Solution {
    private long helper(int i, int j, long[][] dp) {
        if (i == 0 || j == 0)
            return 1;
            
        if (dp[i][j] != -1) 
            return dp[i][j];
        
        return dp[i][j] = helper(i - 1, j, dp) + helper(i, j - 1, dp);
    }
    
    public long calculateUniquePaths(int rowCount, int columnCount) {
        // recursion
        // return helper(rowCount - 1, columnCount - 1);
        // memoization
        // use 2d DP because of 2 changing parameters
        long[][] dp = new long[rowCount][columnCount];
        
        for(long[] row : dp) {
            Arrays.fill(row, -1);
        }
        
        return helper(rowCount - 1, columnCount - 1, dp);
    }
}
