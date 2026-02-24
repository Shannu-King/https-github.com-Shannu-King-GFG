class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        // code here
        vector<int>diff;
        for(int i=0;i<a1.size();i++)
        {
            diff.push_back(a1[i]-a2[i]);
        }
        unordered_map<int,int>mp;
        mp[0]=-1;
        int ans=0;
        int k=0;
        for(int i=0;i<diff.size();i++)
        {
            k+=diff[i];
            if(mp.find(k)!=mp.end())
            ans=max(ans,i-mp[k]);
            else
            mp[k]=i;
        }
        return ans;
    }
};