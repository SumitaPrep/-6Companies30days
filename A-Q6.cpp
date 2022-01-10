class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
      vector <int>ans;
      stack<int>s;
      vector<int>nge(n);
      nge[n-1]=n;
      s.push(n-1);
      
      for(int i=n-2;i>=0;i--){
          
          while(!s.empty() and arr[i]>=arr[s.top()])
          s.pop();
          
          if(s.empty())
          nge[i]=n;
          
          else 
          nge[i]=s.top();
          
          s.push(i);
      }
      
     
     int j=0;
     for(int i=0;i<=n-k;i++){
         j=i;
         
         while(nge[j]<i+k)
          j=nge[j];
          
          ans.push_back(arr[j]);
     }   
      return ans;   // your code here
    }
};