class Solution {
  public:
    int largestArea(int n, int m, vector<vector<int>> &arr) {
        // code here
        int k=arr.size();
        vector<int>ro;
        vector<int>co;
        for(int i=0;i<k;i++)
        {
            int r=arr[i][0];
            int c=arr[i][1];
            ro.push_back(r);
            co.push_back(c);
        }
        ro.push_back(0);
        ro.push_back(n+1);
        co.push_back(0);
        co.push_back(m+1);
        
        sort(ro.begin(),ro.end());
        sort(co.begin(),co.end());
        int maxxr=0;
        int maxxc=0;
        for(int i=0;i<ro.size()-1;i++)
        {
            maxxr=max(maxxr,ro[i+1]-ro[i]-1);
            maxxc=max(maxxc,co[i+1]-co[i]-1);
        }
        return maxxr*maxxc;
    }
};