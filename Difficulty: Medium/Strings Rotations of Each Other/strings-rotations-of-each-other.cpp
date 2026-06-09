class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        s2+=s2;
       return s2.find(s1)!=string::npos;
        return false;
    }
};