class Solution {
  public:
    int sumDiffPairs(vector<int>& arr, int k) {
        // code here
        int s=0;
        sort(arr.begin(),arr.end());
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(i!=0&&arr[i]-arr[i-1]<k)
            {
                s+=arr[i]+arr[i-1];
                i--;
            }
           // cout<<arr[i]<<" "<<arr[i-1]<<endl;
        }
        return s;
    }
};