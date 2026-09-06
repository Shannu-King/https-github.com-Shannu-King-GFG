class Solution {
  public:
    long long pairAndSum(vector<int> &nums) {
        // code here
     long long   int s=0;
        for(int i=0;i<32;i++)
        {
           long long int c=0;
            for(int j=0;j<nums.size();j++)
            {
                if((1<<i)&nums[j])
                c++;
            }
            s+=(c*(c-1)/2)*(1LL<<i);
        }
        return s;
    }
};