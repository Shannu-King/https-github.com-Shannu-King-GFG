class Solution {
  public:
    int missingNumber(vector<int> &nums) {
        // code here
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]-1>=0&&nums[i]-1<nums.size()&&nums[nums[i]-1]!=nums[i])
            {
                swap(nums[i],nums[nums[i]-1]);
                i--;
            }
            
        }
        for(int i=0;i<nums.size();i++)
       {
           if(i+1!=nums[i])
           return i+1;
       }
        return nums.size()+1;
    }
};