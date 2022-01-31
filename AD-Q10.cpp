class Solution
{
    public:
    vector<string> AllParenthesis(int n) 
    {
       int open=n;
        int close=n;
        vector<string>ans;
        string temp="";
        
        helper(ans,open,close,temp);
        return ans;
    }
    
    void helper(vector<string>&ans,int open,int close,string &temp){
        
        if(open==0 && close==0){
            ans.push_back(temp);
            return;
        }
        
        if(open!=0){
            string op1=temp+'(';
            helper(ans,open-1,close,op1);
        }
        
        if(close>open){
            string op2=temp+')';
            helper(ans,open,close-1,op2);
        }
      // Your code goes here 
    }
};