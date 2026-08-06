class Solution {
  public:
    int countMinOperations(vector<int>& arr) {
        // code here
        int c=0;
        int maxx=0;
        for(int i=0;i<arr.size();i++)
        {
            c+=__builtin_popcount(arr[i]);
            int bits=0;
            while(arr[i]>0)
            {
                arr[i]=arr[i]/2;
                bits++;
            }
            maxx=max(maxx,bits);
        }
        return c+maxx-1;
    }
};