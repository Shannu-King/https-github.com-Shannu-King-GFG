class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int maxx=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>arr[maxx])
            maxx=i;
        }
        int left_max=0;
        int right_max=0;
        int water=0;
        for(int i=0;i<maxx;i++)
        {
            if(arr[i]>left_max)
            left_max=arr[i];
            water+=(left_max-arr[i]);
        }
        for(int i=arr.size()-1;i>=maxx;i--)
        {
            if(arr[i]>right_max)
            right_max=arr[i];
            water+=(right_max-arr[i]);
        }
        return water;
    }
};
