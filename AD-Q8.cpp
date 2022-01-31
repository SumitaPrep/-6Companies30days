class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int n = str.size();
       int ans=0;
       if (str[0]=='-'){
           for (int i=1;i<n;i++){
           if (!(str[i]>='0' && str[i]<='9'))return -1;
            ans=ans*10+(str[i]-'0');
          }
          return ans*-1;
       }
       else{
         for (int i=0;i<n;i++){
           if (!(str[i]>='0' && str[i]<='9'))return -1;
           ans=ans*10+(str[i]-'0');
         }
         return ans;//Your code here
    }
    }
};