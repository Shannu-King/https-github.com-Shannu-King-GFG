class Solution {
  public:
    int maxFruits(vector<int>& arr, int m) {
        // code here
        int n=arr.size();
        int maxx=0;
        int s=0;
        for(int i=0;i<m-1;i++)
        {
            arr.push_back(arr[i]);
        }
        for(int i=0;i<m;i++)
        {
            s+=arr[i];
            maxx=max(s,maxx);
        }
        for(int i=m;i<arr.size();i++)
        {
            s=s+arr[i]-arr[i-m];
            maxx=max(s,maxx);
        }
        return maxx;
    }
};