class Solution {
  public:
    bool canSeatAllPeople(int k, vector<int> &seats) {
        // code here
        if(k==1&&seats.size()==1&&seats[0]==0)
        return k;
        for(int i=0;i<seats.size()-1;i++)
        {
           
            if(i==0&&seats[i]==0&&seats[i+1]==0)
            {
                k--;
                seats[i]=1
                ;
               
            }
           else if(i==seats.size()-2&&seats[i]==0&&seats[i+1]==0)
            {
                k--;
                seats[i+1]=1;
            }
            else if(seats[i]==0&&seats[i+1]==0&&seats[i-1]==0)
            {
                seats[i]=1;
                k--;
                
            }
            else if(seats[i]==1&&seats[i+1]==1)
            return false;
            
        }
     //   for(int i=0;i<seats.size();i++)cout<<seats[i]<<endl;
        return k<=0;
    }
};