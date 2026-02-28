class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        // code here
       int l=0;
       int r=arr2.size()-1;
       int ans=INT_MAX;
       int a1=0;
       int a2=0;
       while(l<arr1.size()&&r>=0)
       {
           int k=arr1[l]+arr2[r];
         
           if(abs(k-x)<ans)
           {
               
               a1=arr1[l];
               a2=arr2[r];
              ans=abs(k-x);
           }
           if(k>x)
           {
               
               
               r--;
           }
           else
           l++;
       }
       //cout<<a1<<" "<<a2<<endl;
       return {a1,a2};
    }
};