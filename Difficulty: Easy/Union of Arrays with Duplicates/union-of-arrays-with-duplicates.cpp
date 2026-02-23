class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        map<int,int>mp;
        vector<int>res;
        for(int i=0;i<a.size();i++)
        {
            if(mp[a[i]])
            continue;
            else
            res.push_back(a[i]);
            mp[a[i]]++;
        }
        for(int i=0;i<b.size();i++)
        {
            if(mp[b[i]])
            continue;
            res.push_back(b[i]);
            mp[b[i]]++;
        }
        return res;
    }
};