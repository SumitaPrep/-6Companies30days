class Solution{
public:
    int equalPartition(int N, int arr[])
    {
       int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += arr[i];
        }
        
        if (sum%2)  // if sum of array is odd, not possible 
            return false;
        
        // subset sum with sum = sum/2 
        sum = sum/2;
        vector<vector<int>> dp(2, vector<int>(sum+1));
        
        // space optimized solution
        int bi = 1; 
        
        // for every n it is possible to have sum = 0(empty set)
        for (int i = 0; i < 2; i++) {
            dp[i][0] = true;
        }
        
        // when n = 0 not possible to get sum > 0
        for (int j = 1; j <= sum; j++) {
            dp[0][j] = false;
        }
        
        for (int i = 1; i <= N; i++) {
            bi = (i&1);     // bi oscillates between 0 and 1
            
            for (int j = 0; j <= sum; j++) {
                if (arr[i-1] <= j) 
                    dp[bi][j] = (dp[1-bi][j-arr[i-1]] or dp[1-bi][j]);
                else 
                    dp[bi][j] = dp[1-bi][j];
            }
        }
        return dp[bi][sum]; // code here
    }
};