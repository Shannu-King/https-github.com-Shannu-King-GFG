class Solution {
  public:
    int overlapInt(vector<vector<int>> &arr) {
         vector<int> start, end;
    
    for(auto &it : arr) {
        start.push_back(it[0]);
        end.push_back(it[1]);
    }
    
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    
    int i = 0, j = 0;
    int curr = 0, maxx = 0;
    
    while(i < start.size()) {
        if(start[i] <= end[j]) {
            curr++;
            maxx = max(maxx, curr);
            i++;
        } else {
            curr--;
            j++;
        }
    }
    
    return maxx;
    }
};
