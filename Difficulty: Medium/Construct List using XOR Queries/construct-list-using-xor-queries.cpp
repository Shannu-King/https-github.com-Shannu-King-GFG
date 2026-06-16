class Solution {
  public:
    vector<int> constructList(vector<vector<int>> &q) {
        // code here
        int exor=0;
        vector<int>res;
        for(int i=q.size()-1;i>=0;i--)
        {
            if(q[i][0]==1)
            exor=exor^(q[i][1]);
            else
            {
                 
                  res.push_back(exor^q[i][1]);
            }
           // cout<<exor<<endl;
        }
        res.push_back(exor);
        sort(res.begin(),res.end());
        return res;
    }
};
