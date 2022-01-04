class Solution{
public:
    string help(string &s,int &index)
    {
        string word="";
        int n=0;
        while(index<s.size())
        {
            if(s[index]>='0' && s[index]<='9')
            {
                n=(n*10)+s[index]-'0';
            }
            else if(s[index]=='[')
            {
                string next=help(s,++index);
                while(n>0)
                {
                    word+=next;
                    n--;
                }
            }
            else if(s[index]==']')
            {
                return word;
            }
            else
            {
                word.push_back(s[index]);
            }
            index++;
        }
        return word;
    }
    string decodedString(string s)
    {
        int index=0;
        return help(s,index);
        
    }
};