class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        map<char,int>mp;
        map<char,char>mp1;
        for(int i=0;i<s1.size();i++)
        {
            if(mp[s1[i]]!=s2[i]&&mp[s1[i]])
            {
                return false;
            }
            if(mp1[s2[i]]!=s1[i]&&mp1[s2[i]])
            return false;
            mp[s1[i]]=s2[i];
            mp1[s2[i]]=s1[i];
        }
        return true;
    }
};