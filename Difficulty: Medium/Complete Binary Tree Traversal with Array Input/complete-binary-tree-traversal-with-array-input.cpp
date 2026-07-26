class Solution {
public:
    vector<vector<int>> levelSort(vector<int>& arr) {
        vector<vector<int>> res;

        int level = 0;
        for (int i = 0; i < arr.size(); level++) {
            vector<int> temp;
            int sz = 1 << level;

            for (int j = 0; j < sz && i + j < arr.size(); j++) {
                temp.push_back(arr[i + j]);
            }

            sort(temp.begin(), temp.end());
            res.push_back(temp);

            i += sz;
        }

        return res;
    }
};