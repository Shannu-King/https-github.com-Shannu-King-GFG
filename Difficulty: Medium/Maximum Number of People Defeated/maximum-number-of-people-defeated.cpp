class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
        int i=1;
        int s=0;
        int c=1;
        while(s<=p)
        {
            i=c*c;
            if(s+i>p)
            break;
            s+=i;
            c++;
            //cout<<s<<endl;
        }
        return c-1;
    }
};
