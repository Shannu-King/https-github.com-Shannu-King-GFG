class Solution {
  public:
    string profession(int level, int pos) {
        // code here
          int cnt = __builtin_popcount(pos - 1);
    return (cnt % 2 == 0) ? "Engineer" : "Doctor";
    }
};