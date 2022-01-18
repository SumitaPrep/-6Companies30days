class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
      vector<int>res;
       vector<int>vec(n,-1);
       stack<pair<int,int>>stk;
       for(int i=0; i<n; i++){
           if(stk.empty() == true){
               res.push_back(-1);
               stk.push({price[i],i});
           }
           else if(!stk.empty() and stk.top().first > price[i]){
               res.push_back(stk.top().second);
               stk.push({price[i],i});
           }
           else{
               while(!stk.empty()){
                   if(stk.top().first > price[i]){
                       res.push_back(stk.top().second);
                       break;
                   }
                   stk.pop();
               }
               if(stk.empty()){
                   res.push_back(-1);
               }
                stk.push({price[i],i});
            //   stk.push({price[i],i});
           }
           vec[i] = i - res[i];
       }
       return vec; // Your code here
    }
};
