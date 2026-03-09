class Solution {
  public:
    string largestSwap(string &s) {
        // code here
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            int index=i;
            for(int j=i+1;j<s.size();j++)
            {
                if(s[j]>=c)
                {
                    c=s[j];
                    index=j;
                }
                
            }
            if(c!=s[i])
            {
                swap(s[i],s[index]);
                break;
            }
        }
        return s;
    }
};