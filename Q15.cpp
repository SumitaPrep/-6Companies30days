 {
     map<int,int>m;
       int n=a.size();
       for(int i=0;i<n;i++){
           m[a[i]%k]++;
       }
       for(int i=0;i<n;i++){
           int r=a[i]%k;
           if(r==0){
               if(m[0]&1)
               return 0;
           }
           else if(m[r]!=m[k-r])
           return 0;
       }
       return 1;
 }
       