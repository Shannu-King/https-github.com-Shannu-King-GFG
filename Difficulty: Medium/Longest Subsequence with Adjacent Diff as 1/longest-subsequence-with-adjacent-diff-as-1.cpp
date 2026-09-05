class Solution {
  public:
    int longestSubseq(vector<int>& arr) {
        // code here
        unordered_map<int, int> mp;
               int ans = 0;

               for (int x : arr) {
                   int current = 1 + max(mp[x - 1], mp[x + 1]);

                   mp[x] = max(mp[x], current);

                   ans = max(ans, current);
               }

               return ans;
    }
};