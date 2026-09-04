class Solution {
  public:
    int solve(int n, string s) {
        // code here
        unordered_map<char,int>mp;
        int c=0,cn=0;
        for(int i=0;i<s.size();i++)
        {
            if(c>=n)
            {
                if(mp.find(s[i])==mp.end())
                {
                    cn++;
                    mp[s[i]]=-1;
                }
                
               else if(mp.find(s[i])!=mp.end())
                {
                   
                    if(mp[s[i]]!=-1)
                    c--;
                    mp.erase(s[i]);
                    
                }
            }
            else
            {
              if(mp.find(s[i])==mp.end()){
                c++;
                mp[s[i]]++;
              }
              else
              {
                  if(mp[s[i]]!=-1)
                  c--;
                  mp.erase(s[i]);
              }
            }
        }
        return cn;
    }
};
