class Solution {
  public:
    int findMaxProduct(vector<int>& arr) {
        // code here
        int maxx=INT_MIN;
        int z=0;
        int neg=0;
        int mod=1e9+7;
        long long int c=1;
        if(arr.size()==1)
        return arr[0];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0){z++;
                continue;
            }
            else if(arr[i]<0)
            {
                neg++;
                maxx=max(maxx,arr[i]);
            }
          
        }
        if(arr.size()==z)
        return 0;
        else if(neg==1&&neg+z==arr.size()&&z>0)
        return 0;
       bool finish=false;
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]==0)
           continue;
           if(neg % 2 != 0 && arr[i] == maxx && !finish)
            {
                finish = true;
                continue;
            }

            c = ((c * arr[i]) % mod + mod) % mod;
       }
       return c;
        
    }
};