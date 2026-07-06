class Solution {
  public:
    int maxPathSum(vector<int> &a, vector<int> &b) {
        // Code here
        int maxx=0;
        int s1=0;
        int s2=0;
        int i=0;
        int j=0;
        while(i<a.size()&&j<b.size())
        {
            if(a[i]<b[j])
            {
                s1+=a[i];
                i++;
            }
            else if(a[i]>b[j])
            {
                s2+=b[j];
                j++;
            }
            else
            {
                maxx+=max(s1,s2)+a[i];
                i++;
                j++;
                s1=0,s2=0;
            }
        }
        while(i<a.size())
        {
            s1+=a[i];
            i++;
        }
        while(j<b.size())
        {
            s2+=b[j];
            j++;
        }
        return maxx+max(s1,s2);
    }
};