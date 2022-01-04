class Solution{
public:
    int *findTwoElement(int *arr, int n) {
             sort(arr, arr+n);
      int *array=new int[2];
       
       for(int i=1; i<=n; i++)
      {
          if(arr[i-1]==arr[i])
          {
              array[0]=arr[i-1];
              break;
          }
      }

     

     // to find missing number
      int count=0;
      for(int i=1; i<=n; i++)
      {    
          
          if(array[0]==i)
          {
              count++;
          }
          if(arr[i-1+count]!=i)
          {
             array[1]=i;
             break;
          }
      }
         return array;
   
    }
};