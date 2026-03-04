class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int ans=0;
        int maxx=0;
        for(int i=0;i<k;i++)
        {
            ans=ans^arr[i];
            
        }
        maxx=max(ans,maxx);
        for(int i=k;i<arr.size();i++)
        {
            ans=ans^arr[i-k];
            ans=ans^arr[i];
              maxx=max(ans,maxx);
        }
        return maxx;
    }
};