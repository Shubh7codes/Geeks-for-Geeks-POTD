class Solution
{
    public:
    int lcs(int n, int m, string s1, string s2)
    {
        int dp[1001][1001];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0||j==0)
                dp[i][j]=0;     
                
                else if (s1[i-1] == s2[j-1])        
                dp[i][j] = dp[i-1][j-1] + 1; 
                
                else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]); 
            }
        }
        return dp[n][m];   
    }
};
