class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        unordered_map<int,int>mp;
        vector<int>res;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(int i=low;i<=high;i++)
        {
            if(mp.find(i)==mp.end())
            res.push_back(i);
        }
        return res;
    }
    
};