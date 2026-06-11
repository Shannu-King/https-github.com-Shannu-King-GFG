class Solution {
  public:
    int findIndex(string &s) {
        // code here
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')')
            c++;
        }
        if(!c)
        return 0;
        int d=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            d++;
            else
            c--;
            if(c==d)
            return i+1;
        }
        return s.size();
    }
};