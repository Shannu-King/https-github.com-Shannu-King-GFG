class Solution {
  public:
    int minSubsets(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int c=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]+1!=arr[i+1])
            c++;
        }
        return c+1;
    }
};
