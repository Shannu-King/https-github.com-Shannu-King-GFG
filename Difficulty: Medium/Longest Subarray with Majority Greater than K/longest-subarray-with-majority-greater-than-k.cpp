class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        unordered_map<int,int>mp;
        int ans=0;
        int p=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>k)
            p+=1;
            else
            p-=1;
            if(p>0)
            ans=i+1;
            else{
            if(mp.find(p-1)!=mp.end())
            ans=max(ans,i-mp[p-1]);
            
            }
            if(mp.find(p)==mp.end())
            mp[p]=i;
        }
        return ans;
        
    }
};