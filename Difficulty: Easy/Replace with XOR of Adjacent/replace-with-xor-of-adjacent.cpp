class Solution {
  public:
    void replaceElements(vector<int>& arr) {
        // code here
        int n=arr.size();
        int a=arr[0],b=arr[1],c=arr[n-2],d=arr[n-1];
        int temp=arr[0];
        for(int i=1;i<n-1;i++)
        {
            int k=arr[i];
            arr[i]=temp^arr[i+1];
            temp=k;
            
        }
        arr[0]=a^b;
        arr[n-1]=c^d;
    }
};