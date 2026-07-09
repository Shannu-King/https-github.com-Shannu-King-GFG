class Solution {
  public:
    int countKdivPairs(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mp;
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=arr[i]%k;
            int req=(k-arr[i])%k;
            if(mp.find(req)!=mp.end())
            c+=mp[req];
            mp[arr[i]]++;
        }
        return c;
    }
};