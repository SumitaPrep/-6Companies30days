vector<int>v;
       int sum=0;
       int start=0;
       int flag=0;
       for(int i=0;i<n;i++)
       {
          sum+=arr[i];
          while(sum>s)
          {
              sum=sum-arr[start];
              start++;
          }
          if(sum==s)
          {
              v.push_back(start+1);
              v.push_back(i+1);
              return v;
              flag=1;
              break;
          }
       }
       if(flag==0)
       {
           v.clear();
           v.push_back(-1);
           return v;
       }
       }
       