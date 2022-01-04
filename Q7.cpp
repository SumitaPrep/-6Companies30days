int lastPosition(int n, int m, int k)
{
    int ans=m+k-1;
    if (m <= n - k + 1)
        return ans;
 
    
    m = m - (n - k + 1);
 
   
    return (m % n == 0) ? n : (m % n);
}