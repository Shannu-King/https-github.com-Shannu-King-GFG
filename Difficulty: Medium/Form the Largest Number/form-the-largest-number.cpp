class Solution {
  public:
  const static bool lexicographicalSort(const string&a, const string &b)
  {
      return a+b <= b+a;
  }
    string findLargest(vector<int> &arr) {
        // code here
        
        vector<string>res;
        for(int i=0;i<arr.size();i++)
        {
            res.push_back(to_string(arr[i]));
        }
      
        sort(res.begin(),res.end(),lexicographicalSort);
          if(res[res.size()-1]=="0")
        return "0";
        string ans="";
        for(int i=res.size()-1;i>=0;i--)
        {
            ans+=res[i];
        }
        return ans;
        
    }
};