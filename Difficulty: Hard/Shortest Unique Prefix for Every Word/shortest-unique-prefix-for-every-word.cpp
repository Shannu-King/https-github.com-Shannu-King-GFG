class Solution {
  public:
    vector<string> findPrefixes(vector<string>& arr) {
        // code here
        unordered_map<string,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            string s="";
            for(int j=0;j<arr[i].size();j++)
            {
                s+=arr[i][j];
                mp[s]++;
            }
        }
        vector<string>res;
        for(int i=0;i<arr.size();i++)
        {
             string s="";
             bool flag=false;
            for(int j=0;j<arr[i].size();j++)
            {
                s+=arr[i][j];
                if(mp[s]==1){
                res.push_back(s);
                flag=true;
                    break;
                }
            }
            if(!flag)
            res.push_back(s);
           
        }
        return res;
    }
};