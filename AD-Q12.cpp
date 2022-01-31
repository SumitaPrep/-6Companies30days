class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
       vector<int>v;
        
        if(n==0)return v;
        
        int maxVal=a[n-1];
        
        v.push_back(maxVal);
        
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=maxVal)
            {
                v.push_back(a[i]);
                
                maxVal=a[i];
            }
        }
        
        reverse(v.begin(),v.end());
        
        return v; // Code here
        
    }
};