class Solution {
  public:
  int fun(int n)
  {
      if(n<=1)
      return 1;
      else
      return fun(n-1)+(n-1)*fun(n-2);
  }
    int countFriendsPairings(int n) {
        // code here
        int k=fun(n);
        return k;
    }
};
