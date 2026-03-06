class Solution {
  public:
  bool fun(vector<int>&a,vector<int>&b)
  {
      for(int i=0;i<26;i++)
      {
          if(b[i]<a[i])
          return false;
      }
      return true;
  }
    string minWindow(string &s, string &p) {
        // code here
       vector<int>freq1(26,0);
       vector<int>freq2(26,0);
       int mini=INT_MAX;
       string res="";
       for(int i=0;i<p.size();i++)freq1[p[i]-'a']++;
       int l=0;
       int r=0;
       while(r<s.size())
       {
           freq2[s[r]-'a']++;
           while(fun(freq1,freq2))
           {
               if(r-l+1<mini)
               {
                   mini=r-l+1;
                   res=s.substr(l,r-l+1);
               }
                 freq2[s[l]-'a']--;
               l++;
           }
         
           r++;
       }
       return res;
        
        
    }
};