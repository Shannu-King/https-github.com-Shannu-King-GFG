class Solution {
  public:
    vector<int> getMarks(vector<int> &l, vector<int> &r, vector<int> &rank) {
        // code here
        int n=l.size();
        vector<int>pre(n);
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=(r[i]-l[i]+1);
            pre[i]=s;
            //cout<<pre[i]<<" ";
        }
        vector<int>res;
        for(int i=0;i<rank.size();i++)
        {
            
int idx = lower_bound(pre.begin(), pre.end(), rank[i]) - pre.begin();
            
           
        int prev = (idx == 0) ? 0 : pre[idx - 1];

             int ans = l[idx] + (rank[i] - prev) - 1;

             res.push_back(ans);
            
        }
       // cout<<endl;
        return res;
    }
};